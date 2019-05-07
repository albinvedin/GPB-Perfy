# GPB-Perfy
Performance Tests for the protoc-plugin [protoc-gen-validate](https://github.com/envoyproxy/protoc-gen-validate).<br/>
The main program is written in Golang, so Golang is required even though only C++ tests are to be executed. C++ is not required to execute the Golang-tests.

Tests are written for:
- C++ :white_check_mark:
- Golang :white_check_mark:

## Installation
### Google Protocol Buffers
For more information, visit Google Protocol Buffers [installation guide](https://developers.google.com/protocol-buffers/docs/tutorials).

Make sure you have the following paths in ~/.bashrc.user:
```
export PATH=$HOME/.local/bin:$PATH
export GOROOT=/usr/local/go
export GOPATH=$HOME/go
export PATH=$GOROOT/bin:$GOPATH/bin:$PATH
export LD_LIBRARY_PATH=$HOME/.local/lib
```

Source the file to activate the newly added paths by running the following command:
```
$ source ~/.bashrc.user
```

#### Golang
To install the Go protocol buffers plugin execute the following:
```
go get -u github.com/golang/protobuf/protoc-gen-go
```

#### C++
```
$ git clone https://github.com/protocolbuffers/protobuf.git
$ cd protobuf
$ git submodule update --init --recursive
$ ./autogen.sh
```

To build and install the C++ Protocol Buffer runtime and the Protocol Buffer compiler (protoc) execute the following:
```
$ ./configure --prefix=$HOME/.local
$ make
$ make check
$ sudo make install
```

### protoc-gen-validate
```
# Fetches protoc-gen-validate repo into $GOPATH
$ go get -d github.com/envoyproxy/protoc-gen-validate

# Installs protoc-gen-validate into $GOPATH/bin
$ make build
```
For more information, visit the projects [GitHub page](https://github.com/envoyproxy/protoc-gen-validate).

## Compilation
### Everything
The command below demonstrates compilation from the root folder.
```
$ ./compile.sh
```
This script calls on all other "compile.sh" scripts and builds the main program, perfy.go.

### perfy.go
The command below demonstrates compilation from the root folder.
```
$ go build perfy.go
```

### go-files
Place the go-files under "/res/go" and run the script "compile.sh". The command below demonstrates compilation from the root folder.
```
$ ./res/go/compile.sh
```

### .proto-files
Place the .proto-files under "/res/vanilla" and run the script "compile.sh". The command below demonstrates compilation from the root folder.
```
$ ./res/vanilla/compile.sh
```

### .proto-files (PGV)
Place the .proto-files under "/res/pgv" and run the script "compile.sh". The command below demonstrates compilation from the root folder.
```
$ ./res/pgv/compile.sh
```

## Usage
### Example
```
$ ./perfy -i=10000 -w=100 -t=all -f=perfy.log 100
```
### Flags
  - -s (string) : Specify output statistic (total, average, median) (shorthand) (default "total")
  - -statistic (string) : Specify output statistic (total, average, median) (default "total")

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