package test

import (
	"GPB-Perfy/log"
	"GPB-Perfy/helpers"
	"GPB-Perfy/measure"
	"time"
)

func Validate(iterations int, warmup_iterations int) {
	//testValidateNoErrors(iterations, warmup_iterations)
	testValidateWithErrors(iterations, warmup_iterations)
}

func testValidateNoErrors(iterations int, warmup_iterations int) {
	message := createPGV()
	rElapsedTimes := measure.RepeatedValidate(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Validate No Errors (%s) - Duration: %s\n", "PGV", helpers.SumDurations(filtered))
}

func testValidateWithErrors(iterations int, warmup_iterations int) {
	// TODO: This needs some cleaning up and restructuring
	childCount := 100
	message := createParent(childCount)
	var rElapsedTimes []time.Duration
	perChild := iterations / childCount
	for i := 0; i < childCount; i++ {
		// Fetch current child object and place error
		child := message.Children[i]
		child.StringPattern = "berit Ljung"
		for j := 0; j < perChild; j++ {
			// Validate message
			elapsedTime := measure.ValidateParent(message)
			rElapsedTimes = append(rElapsedTimes, elapsedTime)
		}
		// Remove error from current child object
		child.StringPattern = "Berit Ljung"
	}
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Validate With Errors (%s) - Duration: %s\n", "PGV", helpers.SumDurations(filtered))
}