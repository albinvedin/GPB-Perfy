#!/usr/bin/env bash
p=$( cd "$(dirname "${BASH_SOURCE[0]}")" ; pwd -P )

for file in "$p/*.cc"
do
  name=$(echo $file | sed "s/.*\///" | sed "s/\.cc//")
  dtype=$(echo $name | sed "s/Validate//" | perl -pe "s/[A-Z][a-z\d]*\K.*//" | sed "s/.*/\L&/" )
  g++ -std=c++11 -o "$p/out/$name" $file "$p/../pgv/gen/cpp/$dtype.pb.cc" "$p/../pgv/gen/cpp/$dtype.pb.validate.cc" "$p/../pgv/gen/cpp/validate/validate.pb.cc" -I ~/.local/include -lprotobuf -pthread -lpthread
done


