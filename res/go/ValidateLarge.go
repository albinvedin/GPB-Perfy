// Template for generating Golang tests, DO NOT EDIT!

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
	iterations, warmup := helpers.ValidateTestArguments(os.Args)

	elapsedTimes := validateN(iterations, warmup, createMessage())

	output, err := json.Marshal(elapsedTimes)
	if err != nil {
		panic(err)
	}

	fmt.Println(string(output))
}

func validateN(iterations int, warmup int, message *pgv.Large) []int64 {
	var elapsedTimes []int64
	for i := 0; i < iterations; i++ {
		elapsedTime := validate(message)
		if i >= warmup {
			elapsedTimes = append(elapsedTimes, elapsedTime)
		}
	}
	return elapsedTimes
}

func validate(message *pgv.Large) int64 {
	startTime := time.Now()
	message.Validate()
	elapsedTime := time.Since(startTime)
	return elapsedTime.Nanoseconds()
}

func createMessage() *pgv.Large {
	message := new(pgv.Large)
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
	message.Field21 = 50
	message.Field22 = 50
	message.Field23 = 50
	message.Field24 = 50
	message.Field25 = 50
	message.Field26 = 50
	message.Field27 = 50
	message.Field28 = 50
	message.Field29 = 50
	message.Field30 = 50

	message.Field31 = 100
	message.Field32 = 100
	message.Field33 = 100
	message.Field34 = 100
	message.Field35 = 100
	message.Field36 = 100
	message.Field37 = 100
	message.Field38 = 100
	message.Field39 = 100
	message.Field40 = 100

	message.Field51 = []byte("\x99")
	message.Field52 = []byte("\x99")
	message.Field53 = []byte("\x99")
	message.Field54 = []byte("\x99")
	message.Field55 = []byte("\x99")

	message.Field101 = 0
	message.Field102 = 0
	message.Field103 = 0
	message.Field104 = 0
	message.Field105 = 0

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
	message.Field61 = createMessageB()
	message.Field62 = createMessageC()
	message.Field63 = createMessageD()
	message.Field64 = createMessageE()
	message.Field65 = createMessageF()
	message.Field66 = createMessageB()
	message.Field67 = createMessageC()
	message.Field68 = createMessageD()
	message.Field69 = createMessageE()
	message.Field70 = createMessageF()

	return message
}

func createMessageF() *pgv.Large_MessageF {
	message := new(pgv.Large_MessageF)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = 500
	message.Field5 = 500
	return message
}

func createMessageE() *pgv.Large_MessageE {
	message := new(pgv.Large_MessageE)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = 500
	message.Field5 = createMessageF()
	return message
}


func createMessageB() *pgv.Large_MessageB {
	message := new(pgv.Large_MessageB)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}

func createMessageC() *pgv.Large_MessageC {
	message := new(pgv.Large_MessageC)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}

func createMessageD() *pgv.Large_MessageD {
	message := new(pgv.Large_MessageD)
	message.Field1 = 500
	message.Field2 = 500
	message.Field3 = 500
	message.Field4 = createMessageE()
	message.Field5 = createMessageF()
	return message
}
