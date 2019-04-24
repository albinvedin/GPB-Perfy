#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )
protoc -I $p --go_out=$p/gen/go $p/*.proto
protoc -I $p --cpp_out=$p/gen/cpp $p/*.proto
