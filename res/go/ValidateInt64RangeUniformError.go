package main

import (
	"GPB-Perfy/res/pgv/out"
	"encoding/json"
	"fmt"
	"os"
	"strconv"
	"time"
)

func main() {
	iterations, _ := strconv.Atoi(os.Args[1])
	warmup, _ := strconv.Atoi(os.Args[2])
	elementCount, _ := strconv.Atoi(os.Args[3])

	elapsedTimes := validateN(iterations, warmup, createMessage(elementCount))

	output, err := json.Marshal(elapsedTimes)
	if err != nil {
		panic(err)
	}

	fmt.Println(string(output))
}

func v() {
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

func validateN(iterations int, warmup int, message *pgv.Int64Range) []int64 {
	var elapsedTimes []int64
	for i := 0; i < iterations; i++ {
		elapsedTime := validate(message)
		if i >= warmup {
			elapsedTimes = append(elapsedTimes, elapsedTime)
		}
	}
	return elapsedTimes
}

func validate(message *pgv.Int64Range) int64 {
	startTime := time.Now()
	err := message.Validate()
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime.Nanoseconds()
}

func createMessage(messageLength int) *pgv.Int64Range {
	message := new(pgv.Int64Range)
	for i := 0; i < messageLength; i++ {
		message.Content = append(message.Content, 0)
	}
	return message
}
