package main

import (
	"GPB-Perfy/args"
	"GPB-Perfy/log"
	"GPB-Perfy/test"
	"strconv"
)

func main() {
	times, warmup, fileName := args.Fetch()
	log.Init(fileName)

	log.Info("START")
	log.Info("Iterations: " + strconv.Itoa(times))
	log.Info("Warmup: " + strconv.Itoa(warmup))

	test.Serialize(times, warmup)
	test.Deserialize(times, warmup)
	test.Validate(times, warmup)
	test.ValidateInt64Range(times, warmup, 10000)

	log.Info("END")
}
