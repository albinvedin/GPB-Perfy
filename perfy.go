package main

import (
	"GPB-Perfy/args"
	"GPB-Perfy/log"
	"GPB-Perfy/test"
	"strconv"
)

func main() {
	arguments := args.Fetch()
	log.Init(arguments.Filename)

	log.Info("START")
	log.Info("Iterations: " + strconv.Itoa(arguments.Iterations))
	log.Info("Warmup: " + strconv.Itoa(arguments.Warmup))

	test.Serialize(arguments.Iterations, arguments.Warmup)
	test.Deserialize(arguments.Iterations, arguments.Warmup)
	test.Validate(arguments.Iterations, arguments.Warmup)
	test.ValidateInt64Range(arguments.Iterations, arguments.Warmup, 10000)

	log.Info("END")
}
