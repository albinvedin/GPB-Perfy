package args

import (
	"flag"
)

type Arguments struct {
	Iterations int
	Warmup     int
	Filename   string
}

func Fetch() Arguments {
	iterationsPtr := prepareIntArgument("iterations", "i", 10000, "Number of iterations for the performance test")
	warmupPtr := prepareIntArgument("warmup", "w", 0, "Number of warmup-iterations for the performance test")
	filenamePtr := prepareStringArgument("filename", "f", "", "The name of the output-file")

	flag.Parse()

	args := Arguments{
		Iterations: *iterationsPtr, 
		Warmup:     *warmupPtr,
		Filename:   *filenamePtr,
	}
	
	return args
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