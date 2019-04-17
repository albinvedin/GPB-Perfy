package test

import (
	gm "GPB-Perfy/generated/person"
	sm "GPB-Perfy/static/person"
	pb "github.com/golang/protobuf/proto"
	"GPB-Perfy/measure"
	"GPB-Perfy/helpers"
	"GPB-Perfy/log"
)

func Time(iterations int, warmup_iterations int) {
	testPGV(iterations, warmup_iterations)
	testRaw(iterations, warmup_iterations)
}

func testPGV(iterations int, warmup_iterations int) {
	version := "PGV"
	message := new(gm.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testEncoding(iterations, warmup_iterations, message, version)
	testDecoding(iterations, warmup_iterations, message, version)
}

func testRaw(iterations int, warmup_iterations int) {
	version := "Raw"
	message := new(sm.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testEncoding(iterations, warmup_iterations, message, version)
	testDecoding(iterations, warmup_iterations, message, version)
}

func testEncoding(iterations int, warmup_iterations int, message pb.Message, version string) {
	rElapsedTimes := measure.MeasureRepeatedEncode(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Encoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}

func testDecoding(iterations int, warmup_iterations int, message pb.Message, version string) {
	bytes := helpers.Pack(message)
	rElapsedTimes := measure.MeasureRepeatedDecode(bytes, message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Decoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
}