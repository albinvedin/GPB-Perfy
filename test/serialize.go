package test

import (
	"GPB-Perfy/helpers"
	"GPB-Perfy/log"
	"GPB-Perfy/measure"
	"GPB-Perfy/pgv"
	"GPB-Perfy/vanilla"
	"github.com/golang/protobuf/proto"
)

func Serialize(iterations int, warmup_iterations int) {
	testPGV(iterations, warmup_iterations)
	testVanilla(iterations, warmup_iterations)
}

func testPGV(iterations int, warmup_iterations int) {
	version := "PGV"
	message := new(pgv.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testSerialize(iterations, warmup_iterations, message, version)
}

func testVanilla(iterations int, warmup_iterations int) {
	version := "Vanilla"
	message := new(vanilla.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testSerialize(iterations, warmup_iterations, message, version)
}

func testSerialize(iterations int, warmup_iterations int, message proto.Message, version string) {
	rElapsedTimes := measure.RepeatedSerialize(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Serialize (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}
