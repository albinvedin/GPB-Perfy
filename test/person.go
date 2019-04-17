package test

import (
	"GPB-Perfy/pgv"
	"GPB-Perfy/vanilla"
)

func createPGV() *pgv.Person {
	message := new(pgv.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	return message
}

func createVanilla() *vanilla.Person {
	message := new(vanilla.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	return message
}