package main

import (
	"GPB-Perfy/res/pgv/gen/go"
	"GPB-Perfy/src/helpers"
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
	bytes := helpers.Marshal(message)
	elapsedTimes := repeatedDeserialize(bytes, message, iterations)[warmup:]

	output, err := json.Marshal(elapsedTimes)
	if err != nil {
		panic(err)
	}

	fmt.Println(string(output))
}

func deserialize(bytes []byte, message proto.Message) int64 {
	startTime := time.Now()
	err := proto.Unmarshal(bytes, message)
	elapsedTime := time.Since(startTime)
	if err != nil {
		panic(err)
	}
	return elapsedTime.Nanoseconds()
}

func repeatedDeserialize(bytes []byte, message proto.Message, iterations int) []int64 {
	var rElapsedTimes []int64
	for i := 0; i < iterations; i++ {
		elapsedTime := deserialize(bytes, message)
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

func createMessageF() *pgv.Small_MessageF {
	message := new(pgv.Small_MessageF)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = 500
	message.Field5 = 500
	return message
}

func createMessageE() *pgv.Small_MessageE {
	message := new(pgv.Small_MessageE)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = 500
	message.Field5 = createMessageF()
	return message
}


func createMessageB() *pgv.Small_MessageB {
	message := new(pgv.Small_MessageB)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}

func createMessageC() *pgv.Small_MessageC {
	message := new(pgv.Small_MessageC)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}

func createMessageD() *pgv.Small_MessageD {
	message := new(pgv.Small_MessageD)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}
