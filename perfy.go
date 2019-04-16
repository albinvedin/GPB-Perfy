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
) 

func main() {
	times, warmup, fileName := args.Fetch()

	log.Init(fileName)

	log.Info("Iterations: " + strconv.Itoa(times))
	log.Info("Warmup: " + strconv.Itoa(warmup))

	testPGV(times, warmup, "PGV")
	testRaw(times, warmup, "Raw")
}

func testPGV(iterations int, warmup_iterations int, version string) {
	log.Info(version + ": STARTING")

	p := new(gm.Person)
	p.Id = 1000
	p.Name = "John Doe"
	p.Email = "john.doe@example.com"

	{
		log.Debug("Start measure encoding")
		rElapsedTimes := measure.MeasureRepeatedEncode(p, iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Done! Duration: %s\n", helpers.SumDurations(filtered))
	}

	{
		bytes, err := pb.Marshal(p)
		if err != nil {
			panic(err)
		}
		log.Debug("Start measure decoding")
		measure.MeasureRepeatedDecode(bytes, new(gm.Person), warmup_iterations)
		rElapsedTimes := measure.MeasureRepeatedDecode(bytes, new(gm.Person), iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Done! Duration: %s\n", helpers.SumDurations(filtered))
	}
}

func testRaw(iterations int, warmup_iterations int, version string) {
	log.Info(version + ": STARTING")

	p := new(sm.Person)
	p.Id = 1000
	p.Name = "John Doe"
	p.Email = "john.doe@example.com"

	{
		log.Debug("Start measure encoding")
		rElapsedTimes := measure.MeasureRepeatedEncode(p, iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Done! Duration: %s\n", helpers.SumDurations(filtered))
	}

	{
		bytes, err := pb.Marshal(p)
		if err != nil {
			panic(err)
		}
		log.Debug("Start measure decoding")
		measure.MeasureRepeatedDecode(bytes, new(gm.Person), warmup_iterations)
		rElapsedTimes := measure.MeasureRepeatedDecode(bytes, new(gm.Person), iterations)
		filtered := helpers.FilterWarmups(rElapsedTimes, warmup_iterations)
		log.Debugf("Done! Duration: %s\n", helpers.SumDurations(filtered))
	}
}