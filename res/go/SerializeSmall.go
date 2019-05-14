package main

import (
	"GPB-Perfy/res/pgv/gen/go"
	"encoding/json"
	"fmt"
	"github.com/golang/protobuf/proto"
	"os"
	"strconv"
	"time"
)

func main() {
	iterations, _ := strconv.Atoi(os.Args[1])
	warmup, _ := strconv.Atoi(os.Args[2])

	message := createMessage()
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

func createMessage() *pgv.Small {
	message := new(pgv.Small)
	/* Attributes */
	message.Field1 = 5
	message.Field2 = 5
	message.Field3 = 5
	message.Field4 = 5
	message.Field5 = 5

	message.Field6 = 25
	message.Field7 = 25
	message.Field8 = 25
	message.Field9 = 25
	message.Field10 = 25
	
	message.Field31 = 500
	message.Field32 = 500

	message.Field51 = []byte("\x99")

	message.Field101 = 0

	/* Messages */
	message.Field41 = createMessageB()
	message.Field42 = createMessageC()
	message.Field43 = createMessageD()
	message.Field44 = createMessageE()
	message.Field45 = createMessageF()

	return message
}

func createMessageF() *pgv.MessageF {
	message := new(pgv.MessageF)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = 500
	message.Field5 = 500
	return message
}

func createMessageE() *pgv.MessageE {
	message := new(pgv.MessageE)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = 500
	message.Field5 = createMessageF()
	return message
}


func createMessageB() *pgv.MessageB {
	message := new(pgv.MessageB)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}

func createMessageC() *pgv.MessageC {
	message := new(pgv.MessageC)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}

func createMessageD() *pgv.MessageD {
	message := new(pgv.MessageD)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}