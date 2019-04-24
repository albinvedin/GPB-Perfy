package args

import (
	"flag"
)

type Args struct {
	Output     string
	Content    string
	Lang       string
	Test       string
	Iterations string
	Warmup     string
	Help       bool
	Tail       []string
}

func Fetch() Args {
	output := prepareStringArg("output", "o", "", "Specify log output file (defaults to console if empty)")
	content := prepareStringArg("content", "c", "all", "Specify log content (all, average, median)")
	lang := prepareStringArg("lang", "l", "go", "Language to run performance tests in")
	test := prepareStringArg("test", "t", "", "Test to run")
	iterations := prepareStringArg("iterations", "i", "10000", "Number of iterations for the performance test")
	warmup := prepareStringArg("warmup", "w", "1000", "Number of warmup-iterations for the performance test")
	help := prepareBoolArg("help", "h", false, "List available tests for any given language")

	flag.Parse()

	rest := flag.Args()

	args := Args{
		Output:     *output,
		Content:    *content,
		Lang:       *lang,
		Test:       *test,
		Iterations: *iterations,
		Warmup:     *warmup,
		Help:       *help,
		Tail:       rest,
	}

	return args
}

func prepareStringArg(long string, short string, defaultValue string, usage string) *string {
	var variable string
	flag.StringVar(&variable, long, defaultValue, usage)
	flag.StringVar(&variable, short, defaultValue, usage+" (shorthand)")
	return &variable
}

func prepareIntArg(long string, short string, defaultValue int, usage string) *int {
	var variable int
	flag.IntVar(&variable, long, defaultValue, usage)
	flag.IntVar(&variable, short, defaultValue, usage+" (shorthand)")
	return &variable
}

func prepareBoolArg(long string, short string, defaultValue bool, usage string) *bool {
	var variable bool
	flag.BoolVar(&variable, long, defaultValue, usage)
	flag.BoolVar(&variable, short, defaultValue, usage+" (shorthand)")
	return &variable
}
