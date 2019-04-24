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

	acceptedContents := []string{"all", "average", "median"}
	if !HasElem(acceptedContents, args.Content) {
		log.Fatalf("Content '%s' is not supported.\n", args.Content)
	}

	if !HasElem(helpers.GetAvailableTests(args.Lang), args.Test) {
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
