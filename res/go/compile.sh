#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )
for path in $p/*.go; do
  name=$(echo $path | sed "s/.*\///")
  go build -gcflags '-N -l' -o $p/out/${name::-3} $path
done
chmod +x $p/out/*
