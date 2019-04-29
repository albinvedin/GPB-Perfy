package main

import (
	"GPB-Perfy/res/pgv/gen/go"
	"encoding/json"
	"fmt"
	"os"
	"strconv"
	"time"
	"strings"
)

func main() {
	if (len(os.Args) < 4) {
		words := strings.Split(os.Args[0], "/")
		name := words[len(words) - 1]
		msg := name + ": Requires 3 arguments (Iterations, Warmup, Element Count)"
		panic(msg)	
	} else {
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
}

func validateN(iterations int, warmup int, message *pgv.DoubleRange) []int64 {
	var elapsedTimes []int64
	for i := 0; i < iterations; i++ {
		elapsedTime := validate(message)
		if i >= warmup {
			elapsedTimes = append(elapsedTimes, elapsedTime)
		}
	}
	return elapsedTimes
}

func validate(message *pgv.DoubleRange) int64 {
	startTime := time.Now()
	err := message.Validate()
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime.Nanoseconds()
}

func createMessage(messageLength int) *pgv.DoubleRange {
	message := new(pgv.DoubleRange)
	for i := 0; i < messageLength; i++ {
		message.Content = append(message.Content, 0)
	}
	return message
}
