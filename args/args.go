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
	Tail       []string
}

func Fetch() Args {
	output := stringArg("output", "o", "", "Specify log output file (defaults to console if empty)")
	content := stringArg("content", "c", "all", "Specify log content (all, average, median)")
	flag.Parse()

	rest := flag.Args()
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
