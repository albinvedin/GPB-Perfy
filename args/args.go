package args

import (
	"flag"
)

func Fetch() (int, int, string) {
	iterationsPtr := prepareIntArgument("iterations", "i", 10000, "Number of iterations for the performance test")
	warmupPtr := prepareIntArgument("warmup", "w", 0, "Number of warmup-iterations for the performance test")
	filenamePtr := prepareStringArgument("filename", "f", "", "The name of the output-file")

	flag.Parse()
	
	return *iterationsPtr, *warmupPtr, *filenamePtr
}

func prepareStringArgument(long string, short string, defaultValue string, usage string) *string {
	var variable string
	flag.StringVar(&variable, long, defaultValue, usage)
	flag.StringVar(&variable, short, defaultValue, usage  + " (shorthand)")
	return &variable
}

func prepareIntArgument(long string, short string, defaultValue int, usage string) *int {
	var variable int
	flag.IntVar(&variable, long, defaultValue, usage)
	flag.IntVar(&variable, short, defaultValue, usage  + " (shorthand)")
	return &variable
}