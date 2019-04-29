package main

import (
	"GPB-Perfy/res/pgv/gen/go"
	"GPB-Perfy/src/helpers"
	"encoding/json"
	"fmt"
	"time"
	"os"
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

func validateN(iterations int, warmup int, message *pgv.Int64Range) []int64 {
	var elapsedTimes []int64
	perElement := iterations / len(message.Content)
	for i := 0; i < len(message.Content); i++ {
		// message := message.Content[i]
		// Place error
		for j := 0; j < perElement; j++ {
			elapsedTimes = append(elapsedTimes, validate(message))
		}
		// Remove error
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
