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
		helpers.DisplayAvailableTests(arguments.Lang, arguments.Arch)
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

	tests := helpers.GetTests(arguments.Test, arguments.Lang, arguments.Arch)
	data := append([]string{arguments.Iterations, arguments.Warmup}, arguments.Tail...)

	for _, test := range tests {
		path := helpers.GetPath() + "/../../res/" + arguments.Lang + "/out/" + arguments.Arch + "/" + test
		cmd := exec.Command(path, data...)
		output, err := cmd.CombinedOutput()
		if err != nil {
			logger.Info.Println(string(output))
		} else {
			var result []int64
			err = json.Unmarshal(output, &result)
			if err != nil {
				panic(err)
			}
			if arguments.Statistic == "raw" {
				logger.Info.Printf("%s\n (%v): %."+arguments.Precision+"fs\n", test, arguments.Statistic, result)
			} else if arguments.Statistic == "all" {
				logger.Info.Printf("%s (%s): %."+arguments.Precision+"fs\n", test, "total", helpers.GetStatistic("total", result))
				logger.Info.Printf("%s (%s): %."+arguments.Precision+"fs\n", test, "average", helpers.GetStatistic("average", result))
				logger.Info.Printf("%s (%s): %."+arguments.Precision+"fs\n", test, "median", helpers.GetStatistic("median", result))
				logger.Info.Printf("%s\n (%v): %."+arguments.Precision+"fs\n", test, "raw", result)

			} else {
				logger.Info.Printf("%s (%s): %."+arguments.Precision+"fs\n", test, arguments.Statistic, helpers.GetStatistic(arguments.Statistic, result))
			}
		}
	}

	logger.Info.Println("END")
}
