package args

import (
	"GPB-Perfy/src/helpers"
	"log"
	"reflect"
	"strings"
	"strconv"
)

func Validate(args Args) {
	acceptedLangs := []string{"cpp", "go"}
	if !HasElem(acceptedLangs, args.Lang) {
		log.Fatalf("Language '%s' is not supported.\n", args.Lang)
	}

	acceptedStatistics := []string{"total", "average", "median"}
	if !HasElem(acceptedStatistics, args.Statistic) {
		log.Fatalf("Statistic '%s' is not supported.\n", args.Statistic)
	}

	if args.Test != "all" && !HasElem(helpers.GetAvailableTests(args.Lang, args.Arch), args.Test) {
		log.Fatalf("Test '%s' does not exists.\n", args.Test)
	}
}

func HasElem(s interface{}, elem interface{}) bool {
	arrV := reflect.ValueOf(s)
	if arrV.Kind() == reflect.Slice {
		for i := 0; i < arrV.Len(); i++ {
			if arrV.Index(i).Interface() == elem {
				return true
			}
		}
	}
	return false
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