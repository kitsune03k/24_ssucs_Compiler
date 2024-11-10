#!/bin/bash
DIR="testdir"

for file in "$DIR"/*.c
do
  echo ""
  echo "-- $file --"
  cat $file
  echo ""
  cmake-build-debug/./a.out < "$file"
done