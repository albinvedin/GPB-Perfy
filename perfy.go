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

	test.Time(times, warmup)

	log.Info("END")
}