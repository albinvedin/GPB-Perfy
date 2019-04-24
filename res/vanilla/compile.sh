#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )
protoc -I $p --go_out=$p/out/go $p/*.proto
protoc -I $p --cpp_out=$p/out/cpp $p/*.proto
