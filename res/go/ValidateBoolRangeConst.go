package main

import (
	"GPB-Perfy/res/pgv/gen/go"
	"GPB-Perfy/src/helpers"
	"encoding/json"
	"fmt"
	"os"
	"time"
)

func main() {
	iterations, warmup, elementCount := helpers.ValidateRangeTestArguments(os.Args)

	elapsedTimes := validateN(iterations, warmup, createMessage(elementCount))

	output, err := json.Marshal(elapsedTimes)
	if err != nil {
		panic(err)
	}

	fmt.Println(string(output))
}

func validateN(iterations int, warmup int, message *pgv.BoolRangeConst) []int64 {
	var elapsedTimes []int64
	for i := 0; i < iterations; i++ {
		elapsedTime := validate(message)
		if i >= warmup {
			elapsedTimes = append(elapsedTimes, elapsedTime)
		}
	}
	return elapsedTimes
}

func validate(message *pgv.BoolRangeConst) int64 {
	startTime := time.Now()
	err := message.Validate()
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime.Nanoseconds()
}

func createMessage(messageLength int) *pgv.BoolRangeConst {
	message := new(pgv.BoolRangeConst)
	for i := 0; i < messageLength; i++ {
		message.Content = append(message.Content, true)
	}
	return message
}