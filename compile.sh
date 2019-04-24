#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )
go build $p/perfy.go
$p/res/pgv/compile.sh
$p/res/vanilla/compile.sh
$p/res/go/compile.sh
