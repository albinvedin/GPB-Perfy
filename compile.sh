#!/usr/bin/env bash
go build ./perfy.go
./standalone/pgv/compile.sh
./standalone/vanilla/compile.sh
./standalone/go/compile.sh
