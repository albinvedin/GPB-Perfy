#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )
mkdir -p $p/../gen/cpp/validate
protoc -I $p --cpp_out=$p/../gen/cpp/validate $p/validate.proto
cp $p/validate.h $p/../gen/cpp/validate
