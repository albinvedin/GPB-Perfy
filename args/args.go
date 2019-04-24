package args

import (
	"flag"
	"fmt"
)

type Args struct {
	Output     string
	Content    string
	Lang       string
	Test       string
	Iterations string
	Warmup     string
	Tail       []string
}

func Fetch() Args {
	output := stringArg("output", "o", "", "Specify log output file (defaults to console if empty)")
	content := stringArg("content", "c", "all", "Specify log content (all, average, median)")
	lang := stringArg("lang", "l", "go", "Language to run performance tests in")
	test := stringArg("test", "t", "", "Test to run")
	iterations := stringArg("iterations", "i", "10000", "Number of iterations for the performance test")
	warmup := stringArg("warmup", "w", "1000", "Number of warmup-iterations for the performance test")

	flag.Parse()

	rest := flag.Args()

	fmt.Println(rest)

	return Args{
		// Iterations: *iterationsPtr,
		// Warmup:     *warmupPtr,
		Output:     *output,
		Content:    *content,
		Lang:       *lang,
		Test:       *test,
		Iterations: *iterations,
		Warmup:     *warmup,
		Tail:       make([]string, 0),
	}
	/*
	lang, test, iterations, warmup, tail := rest[0], rest[1], rest[2], rest[3], rest[4:]

	return Args{
		// Iterations: *iterationsPtr,
		// Warmup:     *warmupPtr,
		Output:     *output,
		Content:    *content,
		Lang:       lang,
		Test:       test,
		Iterations: iterations,
		Warmup:     warmup,
		Tail:       tail,
	}
	*/
}

func stringArg(long string, short string, defaultValue string, usage string) *string {
	var variable string
	flag.StringVar(&variable, long, defaultValue, usage)
	flag.StringVar(&variable, short, defaultValue, usage+" (shorthand)")
	return &variable
}

func intArg(long string, short string, defaultValue int, usage string) *int {
	var variable int
	flag.IntVar(&variable, long, defaultValue, usage)
	flag.IntVar(&variable, short, defaultValue, usage+" (shorthand)")
	return &variable
}
