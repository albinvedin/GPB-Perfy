# GPB-Perfy
Performance Tests for the protoc-plugin [protoc-gen-validate](https://github.com/envoyproxy/protoc-gen-validate).

## Running the tests
```
$ ./perfy -i=10000 -w=100 -t=all -f=perfy.log 100
```

## Usage
  - -c (string) : Specify log content (all, average, median) (shorthand) (default "all")
  - -content (string) : Specify log content (all, average, median) (default "all")

  - -h : List available tests for any given language (shorthand)
  - -help : List available tests for any given language

  - -i (int) : Number of iterations for the performance test (shorthand) (default 10000)
  - -iterations (int) : Number of iterations for the performance test (default 10000)

  - -l (string) : Language to run performance tests in (shorthand) (default "go")
  - -lang (string) : Language to run performance tests in (default "go")

  - -o (string) : Specify log output file (defaults to console if empty) (shorthand)
  - -output (string) : Specify log output file (defaults to console if empty)

  - -p (int) : Number of decimals shown for the elapsed time. (shorthand) (default 15)
  - -precision (int) : Number of decimals shown for the elapsed time. (default 15)

  - -t (string) : Test to run (shorthand)
  - -test (string) : Test to run

  - -w (int) : Number of warmup-iterations for the performance test (shorthand) (default 1000)
  - -warmup (int) : Number of warmup-iterations for the performance test (default 1000)

## Compiling everything
The command below demonstrates compilation from the root folder.
```
$ ./compile.sh
```
This script calls on all other "compile.sh" scripts and builds the main program, perfy.go.

## Compiling perfy.go
The command below demonstrates compilation from the root folder.
```
$ go build perfy.go
```

## Compiling go-files
Place the go-files under "/res/go" and run the script "compile.sh". The command below demonstrates compilation from the root folder.
```
$ ./res/go/compile.sh
```

## Compiling .proto-files
Place the .proto-files under "/res/pgv" and run the script "compile.sh". The command below demonstrates compilation from the root folder.
```
$ ./res/pgv/compile.sh
```