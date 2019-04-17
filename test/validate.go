package test

import (
	"GPB-Perfy/log"
	"GPB-Perfy/helpers"
	"GPB-Perfy/measure"
	"time"
)

func Validate(iterations int, warmup_iterations int) {
	testValidateNoErrors(iterations, warmup_iterations)
	testValidateWithErrors(iterations, warmup_iterations)
}

func testValidateNoErrors(iterations int, warmup_iterations int) {
	message := createPGV()
	rElapsedTimes := measure.RepeatedValidate(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Validate (%s) - Duration: %s\n", "PGV", helpers.SumDurations(filtered))
}

func testValidateWithErrors(iterations int, warmup_iterations int) []time.Duration {
	//message := createPGV()
	var rElapsedTimes []time.Duration
	len := 100 // len(array)
	perChild := iterations / len
	for i := 0; i < len; i++ {
		// Fetch current child object and place error
		for j := 0; j < perChild; j++ {
			// Validate message
		}
		// Remove error from current child object
	}
	return rElapsedTimes
}