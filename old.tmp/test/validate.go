package test

import (
	"GPB-Perfy/helpers"
	"GPB-Perfy/log"
	"GPB-Perfy/measure"
	"time"
)

func Validate(iterations int, warmup_iterations int) {
	testValidateNoErrors(iterations, warmup_iterations)
	testValidateWithErrors(iterations, warmup_iterations)
}

func testValidateNoErrors(iterations int, warmup_iterations int) {
	message := createPGV()
	rElapsedTimes := measure.RepeatedValidatePerson(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Validate No Errors (%s) - Duration: %s\n", "PGV", helpers.SumDurations(filtered))
}

func ValidateInt64Range(iterations int, warmup int, messageLength int) []time.Duration {
	var rElapsedTimes []time.Duration
	message := createRepeatedInt64Range(messageLength)
	for i := 0; i < iterations; i++ {
		elapsedTime := measure.ValidateInt64Range(message)
		if i >= warmup {
			rElapsedTimes = append(rElapsedTimes, elapsedTime)
		}
	}
	return rElapsedTimes
}

func testValidateWithErrors(iterations int, warmup_iterations int) {
	// How many children the parent message should have
	childCount := 100
	// How many times each child should have an error
	perChild := iterations / childCount

	message := createParent(childCount)
	var rElapsedTimes []time.Duration

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
