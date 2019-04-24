#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )
protoc \
  -I $p \
  -I ${GOPATH}/src \
  -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
  --go_out=":$p/out/go" \
  --validate_out="lang=go:$p/out/go" \
  $p/*.proto
protoc \
  -I $p \
  -I ${GOPATH}/src \
  -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
  --cpp_out=":$p/out/cpp" \
  --validate_out="lang=cc:$p/out/cpp" \
  $p/*.proto

