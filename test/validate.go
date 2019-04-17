package test

import (
	"GPB-Perfy/pgv"
)

func Validate(iterations int, warmup_iterations int) {
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
	message.Validate()
	return message
}
