package main

import (
	"GPB-Perfy/args"
	"GPB-Perfy/log"
	"GPB-Perfy/helpers"
	"encoding/json"
	"os/exec"
	"fmt"
)

func main() {
	tests := helpers.GetAvailableTests("go")
	fmt.Println(helpers.PathExists("res/cpp/out"))
	fmt.Println(tests)
	for i := 0; i < len(tests); i++ {
		l := tests[i]
		fmt.Println("- " + l)
	}
	return
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
