#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )

# proto => go
protoc \
  -I $p \
  -I ${GOPATH}/src \
  -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
  --go_out=":$p/gen/go" \
  --validate_out="lang=go:$p/gen/go" \
  $p/*.proto

# validation-proto => c++
$p/validate/compile.sh

# proto => c++
protoc \
  -I $p \
  -I ${GOPATH}/src \
  -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
  --cpp_out=":$p/gen/cpp" \
  --validate_out="lang=cc:$p/gen/cpp" \
  $p/*.proto

# fix $(proto => c++)
for file in "$p/gen/cpp/*\.pb\.cc"
do
  sed -i "s/::AddDescriptors_validate_2fvalidate_2eproto/::AddDescriptors_validate_2eproto/" $file
done
