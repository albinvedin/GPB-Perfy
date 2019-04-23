package main

import (
	// "GPB-Perfy/args"
	"GPB-Perfy/log"
	"GPB-Perfy/test"
	"flag"
	"fmt"
	"strconv"
)

func main() {
	times, warmup, fileName := args.Fetch()
	log.Init(fileName)

	log.Info("START")
	log.Info("Iterations: " + strconv.Itoa(times))
	log.Info("Warmup: " + strconv.Itoa(warmup))

	// test.Serialize(times, warmup)
	// test.Deserialize(times, warmup)
	// test.Validate(times, warmup)
	r := test.ValidateInt64Range(times, warmup, 10000000)
	fmt.Println(r)

	log.Info("END")
}
