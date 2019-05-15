package helpers

import (
	"fmt"
	protobuf "github.com/golang/protobuf/proto"
	"log"
	"math"
	"os"
	"os/exec"
	"path/filepath"
	"sort"
	"strconv"
	"strings"
)

func Marshal(message protobuf.Message) []byte {
	bytes, err := protobuf.Marshal(message)
	if err != nil {
		log.Fatalf(err.Error())
	}
	return bytes
}

func GetAvailableTests(lang string, arch string) []string {
	path := GetPath() + "/../../res/" + lang + "/out/" + arch + "/"
	exists, _ := PathExists(path)
	if !exists {
		return make([]string, 0)
	}
	stdout, _ := exec.Command("bash", "-c", "ls -p "+path+" | grep -v /").Output()
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

func DisplayAvailableTests(lang string, arch string) {
	tests := GetAvailableTests(lang, arch)
	if len(tests) == 0 {
		fmt.Printf("There are no tests available for language '%s' and architecture '%s'\n", lang, arch)
	} else {
		fmt.Printf("Available tests for language '%s' and architecture '%s'\n", lang, arch)
		for i := 0; i < len(tests); i++ {
			fmt.Printf("- %s\n", tests[i])
		}
	}
}

func GetPath() string {
	ex, err := os.Executable()
	if err != nil {
		log.Fatalf(err.Error())
	}
	exPath := filepath.Dir(ex)
	return exPath
}

func GetTests(input string, lang string, arch string) []string {
	var tests []string
	if input == "all" {
		tests = GetAvailableTests(lang, arch)
	} else {
		tests = append(tests, input)
	}
	return tests
}

func ValidateTestArguments(args []string) (int, int) {
	if len(args) < 3 {
		words := strings.Split(args[0], "/")
		name := words[len(words)-1]
		msg := name + ": Requires 3 arguments (Iterations, Warmup)"
		// This must be a panic. Do not change.
		panic(msg)
	} else {
		iterations, _ := strconv.Atoi(args[1])
		warmup, _ := strconv.Atoi(args[2])
		return iterations, warmup
	}
}

func ValidateRangeTestArguments(args []string) (int, int, int) {
	if len(args) < 4 {
		words := strings.Split(args[0], "/")
		name := words[len(words)-1]
		msg := name + ": Requires 3 arguments (Iterations, Warmup, Element Count)"
		// This must be a panic. Do not change.
		panic(msg)
	} else {
		iterations, _ := strconv.Atoi(args[1])
		warmup, _ := strconv.Atoi(args[2])
		elementCount, _ := strconv.Atoi(args[3])

		return iterations, warmup, elementCount
	}
}

func GetTotal(result []int64) float64 {
	var sum float64
	for _, val := range result {
		sum += NanoToSecond(val)
	}
	return sum
}

func GetAverage(result []int64) float64 {
	return GetTotal(result) / float64(len(result))
}

func GetMedian(result []int64) float64 {
	sort.Slice(result, func(i, j int) bool { return result[i] < result[j] })
	return NanoToSecond(result[int64(len(result)/2)])
}

func NanoToSecond(value int64) float64 {
	return float64(value) / float64(math.Pow(10, 9))
}

func GetStatistic(variant string, result []int64) float64 {
	switch variant {
	case "total":
		return GetTotal(result)
	case "median":
		return GetMedian(result)
	case "average":
		return GetAverage(result)
	default:
		panic("GetStatistic - Error: (" + variant + ") not recognised")
	}
}
