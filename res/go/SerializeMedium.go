package main

import (
	"GPB-Perfy/res/pgv/gen/go"
	"GPB-Perfy/src/args"
	"encoding/json"
	"fmt"
	"github.com/golang/protobuf/proto"
	"os"
	"time"
)

func main() {
	iterations, warmup := args.ValidateTestArguments(os.Args)

	message := createMessage()
	elapsedTimes := repeatedSerialize(message, iterations, warmup)

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

func repeatedSerialize(message proto.Message, iterations int, warmup int) []int64 {
	var rElapsedTimes []int64
	for i := 0; i < iterations; i++ {
		elapsedTime := serialize(message)
		if i >= warmup {
			rElapsedTimes = append(rElapsedTimes, elapsedTime)
		}
	}
	return rElapsedTimes
}

func createMessage() *pgv.Medium {
	message := new(pgv.Medium)
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

	message.Field11 = 10
	message.Field12 = 10
	message.Field13 = 10
	message.Field14 = 10
	message.Field15 = 10

	message.Field16 = 50
	message.Field17 = 50
	message.Field18 = 50
	message.Field19 = 50
	message.Field20 = 50

	message.Field31 = 500
	message.Field32 = 500
	message.Field33 = 500

	message.Field51 = []byte("\x99")
	message.Field52 = []byte("\x99")
	message.Field53 = []byte("\x99")

	message.Field101 = 0
	message.Field102 = 0
	message.Field103 = 0

	/* Messages */
	message.Field41 = createMessageB()
	message.Field42 = createMessageC()
	message.Field43 = createMessageD()
	message.Field44 = createMessageE()
	message.Field45 = createMessageF()
	message.Field46 = createMessageB()
	message.Field47 = createMessageC()
	message.Field48 = createMessageD()
	message.Field49 = createMessageE()
	message.Field50 = createMessageF()

	return message
}

func createMessageF() *pgv.Medium_MessageF {
	message := new(pgv.Medium_MessageF)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = 500
	message.Field5 = 500
	return message
}

func createMessageE() *pgv.Medium_MessageE {
	message := new(pgv.Medium_MessageE)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = 500
	message.Field5 = createMessageF()
	return message
}

func createMessageB() *pgv.Medium_MessageB {
	message := new(pgv.Medium_MessageB)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}

func createMessageC() *pgv.Medium_MessageC {
	message := new(pgv.Medium_MessageC)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}

func createMessageD() *pgv.Medium_MessageD {
	message := new(pgv.Medium_MessageD)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}
