package main

import (
	"GPB-Perfy/args"
	"GPB-Perfy/log"
	"encoding/json"
	"os/exec"
)

func main() {
	args := args.Fetch()

	logger := log.Create(args.Output)

	logger.Info.Println("START")
	logger.Info.Println("Lang:", args.Lang)
	logger.Info.Println("Test:", args.Test)
	logger.Info.Println("Iterations:", args.Iterations)
	logger.Info.Println("Warmup:", args.Warmup)
	logger.Info.Println("Tail:", args.Tail)

	output, err := exec.Command(
		"res/"+args.Lang+"/out/"+args.Test,
		append([]string{args.Iterations, args.Warmup}, args.Tail...)...,
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
