package test

import (
	"GPB-Perfy/helpers"
	"GPB-Perfy/log"
	"GPB-Perfy/measure"
	"GPB-Perfy/pgv"
	"GPB-Perfy/vanilla"
	"github.com/golang/protobuf/proto"
)

func Deserialize(iterations int, warmup_iterations int) {
	testPGV(iterations, warmup_iterations)
	testVanilla(iterations, warmup_iterations)
}

func testPGV(iterations int, warmup_iterations int) {
	version := "PGV"
	message := new(pgv.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testDeserialize(iterations, warmup_iterations, message, version)
}

func testVanilla(iterations int, warmup_iterations int) {
	version := "Vanilla"
	message := new(vanilla.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testDeserialize(iterations, warmup_iterations, message, version)
}

func testDeserialize(iterations int, warmup_iterations int, message proto.Message, version string) {
	bytes := helpers.Marshal(message)
	rElapsedTimes := measure.RepeatedDeserialize(bytes, message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Deserialize (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}
