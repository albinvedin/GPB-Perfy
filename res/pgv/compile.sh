#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )
protoc \
  -I $p \
  -I ${GOPATH}/src \
  -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
  --go_out=":$p/gen/go" \
  --validate_out="lang=go:$p/gen/go" \
  $p/*.proto
protoc \
  -I $p \
  -I ${GOPATH}/src \
  -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
  --cpp_out=":$p/gen/cpp" \
  --validate_out="lang=cc:$p/gen/cpp" \
  $p/*.proto
$p/validate/compile.sh

# for d in */
# do
#   protoc \
#     -I $p \
#     -I ${GOPATH}/src \
#     -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
#     --go_out=":$p/gen/go/$d" \
#     --validate_out="lang=go:$p/gen/go/$d" \
#     $p/$d/*.proto
# done
# for d in */
# do
#   protoc \
#     -I $p \
#     -I ${GOPATH}/src \
#     -I ${GOPATH}/src/github.com/envoyproxy/protoc-gen-validate \
#     --cpp_out=":$p/gen/cpp/$d" \
#     --validate_out="lang=cc:$p/gen/cpp/$d" \
#     $p/$d/*.proto
# done
