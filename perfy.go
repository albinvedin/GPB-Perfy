package main

import (
	"GPB-Perfy/src/args"
	"GPB-Perfy/src/helpers"
	"GPB-Perfy/src/log"
	"encoding/json"
	"os/exec"
)

func main() {
	arguments := args.Fetch()

	if arguments.Help {
		helpers.DisplayAvailableTests(arguments.Lang)
		return
	}

	args.Validate(arguments)

	logger := log.Create(arguments.Output)

	logger.Info.Println("START")
	logger.Info.Println("Lang:", arguments.Lang)
	logger.Info.Println("Test:", arguments.Test)
	logger.Info.Println("Iterations:", arguments.Iterations)
	logger.Info.Println("Warmup:", arguments.Warmup)
	logger.Info.Println("Tail:", arguments.Tail)

	output, err := exec.Command(
		"res/"+arguments.Lang+"/out/"+arguments.Test,
		append([]string{arguments.Iterations, arguments.Warmup}, arguments.Tail...)...,
	).Output()
	if err != nil {
		panic(err)
	}

	var result []int64
	err = json.Unmarshal(output, &result)
	if err != nil {
		panic(err)
	}

	logger.Info.Println(result)

	logger.Info.Println("END")
}
