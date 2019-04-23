# GPB-Perfy
Performance Tests

## Compiling .proto-files
Place the .proto-files under "pgv" and run the script "compile.sh"
```
$ ./compile.sh
```

## Golang Compilation
```
$ go build perfy.go
```

## Usage
  - -f string
    - The name of the output-file (shorthand)
  - -filename string
    - The name of the output-file
  - -i int
    - Number of iterations for the performance test (shorthand) (default 10000)
  - -iterations int
    - Number of iterations for the performance test (default 10000)
  - -w int
    - Number of warmup-iterations for the performance test (shorthand)
  - -warmup int
    - Number of warmup-iterations for the performance test

## Running the tests
```
$ ./perfy -i=10000 -w=100 -f="perfy.log"
```