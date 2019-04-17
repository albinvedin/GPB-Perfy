package main

import (
	gm "GPB-Perfy/generated/person"
	sm "GPB-Perfy/static/person"
	pb "github.com/golang/protobuf/proto"
	"GPB-Perfy/measure"
	"GPB-Perfy/helpers"
	"GPB-Perfy/args"
	"GPB-Perfy/log"
	"strconv"
	"reflect"
) 

type fn func() pb.Message

func main() {
	times, warmup, fileName := args.Fetch()

	log.Init(fileName)

	log.Info("START")
	log.Info("Iterations: " + strconv.Itoa(times))
	log.Info("Warmup: " + strconv.Itoa(warmup))

	testPGV(times, warmup)
	testRaw(times, warmup, "Raw")
	
	log.Info("END")
}

func testEncoding(iterations int, warmup_iterations int) {

}

func testPGV(iterations int, warmup_iterations int) {
	message := new(gm.Person)
	message.Id = 1000
	message.Name = "John Doe"
	message.Email = "john.doe@example.com"
	testPGVEncoding(iterations, warmup_iterations, message)
	testPGVDecoding(iterations, warmup_iterations, message)
}

func testPGVEncoding(iterations int, warmup_iterations int, message *gm.Person) {
	rElapsedTimes := measure.MeasureRepeatedEncode(message, iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Encoding (%s) - Duration: %s\n", "PGV", helpers.SumDurations(filtered))
}

func testPGVDecoding(iterations int, warmup_iterations int, message *gm.Person) {
	bytes, err := pb.Marshal(message)
	if err != nil {
		panic(err)
	}
	measure.MeasureRepeatedDecode(bytes, new(gm.Person), warmup_iterations)
	rElapsedTimes := measure.MeasureRepeatedDecode(bytes, new(gm.Person), iterations)
	filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
	log.Debugf("Decoding (%s) - Duration: %s\n", "PGV", helpers.SumDurations(filtered))
}

/*
func testPGV(iterations int, warmup_iterations int, version string) {
	p := new(gm.Person)
	p.Id = 1000
	p.Name = "John Doe"
	p.Email = "john.doe@example.com"

	{
		rElapsedTimes := measure.MeasureRepeatedEncode(p, iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Encoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
	}

	{
		bytes, err := pb.Marshal(p)
		if err != nil {
			panic(err)
		}
		measure.MeasureRepeatedDecode(bytes, new(gm.Person), warmup_iterations)
		rElapsedTimes := measure.MeasureRepeatedDecode(bytes, new(gm.Person), iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Decoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
	}
}
*/

func testRaw(iterations int, warmup_iterations int, version string) {
	p := new(sm.Person)
	p.Id = 1000
	p.Name = "John Doe"
	p.Email = "john.doe@example.com"

	{
		rElapsedTimes := measure.MeasureRepeatedEncode(p, iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Encoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
	}

	{
		bytes, err := pb.Marshal(p)
		if err != nil {
			panic(err)
		}
		measure.MeasureRepeatedDecode(bytes, new(gm.Person), warmup_iterations)
		rElapsedTimes := measure.MeasureRepeatedDecode(bytes, new(gm.Person), iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Decoding (%s) - Duration: %s\n", version, helpers.SumDurations(filtered))
	}
}