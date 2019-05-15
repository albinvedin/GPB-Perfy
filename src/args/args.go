package args

import (
	"flag"
	"strconv"
)

type Args struct {
	Output     string
	Statistic  string
	Lang       string
	Arch       string
	Test       string
	Iterations string
	Warmup     string
	Precision  string
	Help       bool
	Tail       []string
}

func Fetch() Args {
	output := prepareStringArg("output", "o", "", "Specify log output file (defaults to console if empty)")
	statistic := prepareStringArg("statistic", "s", "total", "Specify output statistic (total, average, median, raw, all")
	lang := prepareStringArg("lang", "l", "go", "Language to run performance tests in")
	arch := prepareStringArg("arch", "a", "x64", "CPU Archetype (x64, arm)")
	test := prepareStringArg("test", "t", "", "Test to run")
	iterations := prepareIntArg("iterations", "i", 10000, "Number of iterations for the performance test")
	warmup := prepareIntArg("warmup", "w", 1000, "Number of warmup-iterations for the performance test")
	precision := prepareIntArg("precision", "p", 15, "Number of decimals shown for the elapsed time.")
	help := prepareBoolArg("help", "h", false, "List available tests for any given language")

	flag.Parse()

	rest := flag.Args()

	args := Args{
		Output:     *output,
		Statistic:  *statistic,
		Lang:       *lang,
		Arch:       *arch,
		Test:       *test,
		Iterations: strconv.Itoa(*iterations),
		Warmup:     strconv.Itoa(*warmup),
		Precision:  strconv.Itoa(*precision),
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
