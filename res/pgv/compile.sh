#!/usr/bin/env bash
protoc \
  -I . \
  -I ${GOPATH}/src \
  -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
  --go_out=":./out" \
  --validate_out="lang=go:./out" \
  *.proto
