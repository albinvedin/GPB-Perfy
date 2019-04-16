package args

import (
	"os"
	"math"
	"strconv"
)

func Fetch() (int, int, string) {
	args := os.Args[1:]
	usage := "Usage: EXECUTABLE ITERATIONS(int) *WARMUP(int)"

	if len(args) == 0 {
		panic("No arguments given\n" + usage)
	}

	times, err := strconv.Atoi(args[0])
	if err != nil {
		panic("Could not convert 'times' to an integer\n" + usage)
	}

	var warmup int
	if len(args) > 1 {
		casted, err := strconv.Atoi(args[1])
		if err != nil {
			panic("Could not convert 'warmup' to an integer\n" + usage)
		}
		warmup = casted
	} else {
		warmup = int(math.Min(float64(times / 10), 1000))
	}

	fileName := "perfy.log"

	return times, warmup, fileName
}