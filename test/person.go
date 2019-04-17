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

func createParent(childrenCount int) *pgv.Parent {
	message := new(pgv.Parent)
	children := createChildren(childrenCount)
	message.Children = children
	return message
}

func createChildren(count int) []*pgv.Child {
	var children []*pgv.Child
	for i := 0; i < count; i++ {
		child := createChild()
		children = append(children, child)
	}
	return children
}

func createChild() *pgv.Child {
	message := new(pgv.Child)
	message.Int64Range = 15
	message.DoubleRange = 15
	message.StringPattern = "Berit Ljung"
	return message
}