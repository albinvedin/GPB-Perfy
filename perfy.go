package main

import (
	"os/exec"
	// "strconv"
	"fmt"
)

func main() {
	// lang, test, logType, logOutput, iterations, warmup, tail := args.Fetch()

	// log.Init(logOutput)

	// log.Info("START")
	// log.Info("Iterations: " + strconv.Itoa(iterations))
	// log.Info("Warmup: " + strconv.Itoa(warmup))

	out, err := exec.Command("go/ValidateRepeatedInt64", "1000", "100", "10").Output()
	if err != nil {
		panic(err)
	}

	fmt.Println(out)

	// log.Info(out)

	// log.Info("END")
}
