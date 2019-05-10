package args

import (
	"GPB-Perfy/src/helpers"
	"log"
	"reflect"
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
