package test

import (
	"GPB-Perfy/helpers"
	"GPB-Perfy/log"
	"GPB-Perfy/measure"
	"GPB-Perfy/pgv"
	"GPB-Perfy/vanilla"
	"github.com/golang/protobuf/proto"
)

func Validate(iterations int, warmup_iterations int) {
    for (i := 0; i < iterations; i++) {
	    message := createPerson()
        message.xxx = fel
        testValidate(message)
    }
}

func createPerson() pgv.Person {
	message := new(pgv.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	return message
}

func testValidate(iterations int, warmup_iterations int, message pgv.Person, version string) {
	rElapsedTimes := measure.RepeatedSerialize(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Serialize (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}
