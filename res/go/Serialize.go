package main

import (
	"fmt"
	"os"
	"strconv"
	"GPB-Perfy/res/pgv/gen/go"
	"github.com/golang/protobuf/proto"
	"time"
	"encoding/json"
)

func main() {
	iterations, _ := strconv.Atoi(os.Args[1])
	warmup, _ := strconv.Atoi(os.Args[2])

	// Use another message-type?
	message := createMessage(10)
	elapsedTimes := repeatedSerialize(message, iterations)[warmup:]

	output, err := json.Marshal(elapsedTimes)
	if err != nil {
		panic(err)
	}

	fmt.Println(string(output))
}

func serialize(message proto.Message) int64 {
	startTime := time.Now()
	_, err := proto.Marshal(message)
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime.Nanoseconds()
}

func repeatedSerialize(message proto.Message, iterations int) []int64 {
	var rElapsedTimes []int64
	for i := 0; i < iterations; i++ {
		elapsedTime := serialize(message)
		rElapsedTimes = append(rElapsedTimes, elapsedTime)
	}
	return rElapsedTimes
}

func createMessage(messageLength int) *pgv.Int64Range {
	message := new(pgv.Int64Range)
	for i := 0; i < messageLength; i++ {
		message.Content = append(message.Content, 0)
	}
	return message
}
