package test

import (
	"GPB-Perfy/pgv"
	"fmt"
)

func Validate(iterations int, warmup_iterations int) {
	iterations = 1
	for i := 0; i < warmup_iterations; i++ {
	}
	for i := 0; i < iterations; i++ {
		message := createPerson()
		message.Validate()
	}
}

func createPerson() *pgv.Person {
	message := new(pgv.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	err := message.Validate()
	if err != nil {
		fmt.Println(err)
	}
	return message
}
