package helpers

import (
	"fmt"
	pb "github.com/golang/protobuf/proto"
	"os"
	"os/exec"
	"path/filepath"
	"strings"
	"time"
	"strconv"
	"math"
)

func SumDurations(durations []time.Duration) time.Duration {
	var sum time.Duration
	for _, duration := range durations {
		sum += duration
	}
	return sum
}

func FilterWarmups(durations []time.Duration, warmup_iterations int) []time.Duration {
	return durations[warmup_iterations:]
}

func Marshal(message pb.Message) []byte {
	bytes, err := pb.Marshal(message)
	if err != nil {
		panic(err)
	}
	return bytes
}

func GetAvailableTests(lang string) []string {
	path := GetPath() + "/res/" + lang + "/out/"
	exists, _ := PathExists(path)
	if !exists {
		return make([]string, 0)
	}
	cmd := exec.Command("/bin/ls", path)
	stdout, _ := cmd.Output()
	tests := strings.Split(strings.TrimSpace(string(stdout)), "\n")
	return tests
}

func PathExists(path string) (bool, error) {
	_, err := os.Stat(path)
	if err == nil {
		return true, nil
	}
	if os.IsNotExist(err) {
		return false, nil
	}
	return true, err
}

func DisplayAvailableTests(lang string) {
	tests := GetAvailableTests(lang)
	if len(tests) == 0 {
		fmt.Printf("There are no tests available for language '%s'\n", lang)
	} else {
		fmt.Printf("Available tests for language '%s'\n", lang)
		for i := 0; i < len(tests); i++ {
			fmt.Printf("- %s\n", tests[i])
		}
	}
}

func GetPath() string {
	ex, err := os.Executable()
	if err != nil {
		panic(err)
	}
	exPath := filepath.Dir(ex)
	return exPath
}

func GetTests(input string, lang string) []string {
	var tests []string
	if input == "all" {
		tests = GetAvailableTests(lang)
	} else {
		tests = append(tests, input)
	}
	return tests
}

func ValidateRangeTestArguments(args []string) (int, int, int) {
	if (len(args) < 4) {
		words := strings.Split(args[0], "/")
		name := words[len(words) - 1]
		msg := name + ": Requires 3 arguments (Iterations, Warmup, Element Count)"
		panic(msg)	
	} else {
		iterations, _ := strconv.Atoi(args[1])
		warmup, _ := strconv.Atoi(args[2])
		elementCount, _ := strconv.Atoi(args[3])

		return iterations, warmup, elementCount
	}
}

func ResultInSeconds(result []int64) float64 {
	var sum float64
	for _, val := range result {
		sum += float64(val) / float64(math.Pow(10, 9))
	}
	return sum
}