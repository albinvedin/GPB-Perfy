package main

import (
	"GPB-Perfy/pgv"
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

	message := createMessage(elementCount)
	elapsedTimes := validateRepeated(iterations, warmup, message)
	out, err := json.Marshal(elapsedTimes)
	if err != nil {
		panic(err)
	}

	fmt.Println(out)
}

func createMessage(messageLength int) *pgv.RepeatedInt64Range {
	message := new(pgv.RepeatedInt64Range)
	for i := 0; i < messageLength; i++ {
		message.Content = append(message.Content, 0)
	}
	return message
}

func validate(message *pgv.RepeatedInt64Range) time.Duration {
	startTime := time.Now()
	err := message.Validate()
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime
}

func validateRepeated(iterations int, warmup int, message *pgv.RepeatedInt64Range) []time.Duration {
	var rElapsedTimes []time.Duration
	for i := 0; i < iterations; i++ {
		elapsedTime := validate(message)
		if i >= warmup {
			rElapsedTimes = append(rElapsedTimes, elapsedTime)
		}
	}
	return rElapsedTimes
}
