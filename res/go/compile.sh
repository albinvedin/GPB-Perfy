#!/usr/bin/env bash
for i in ./*.go; do
  go build -o ./out/${i::-3} $i
done
chmod +x ./out/*
