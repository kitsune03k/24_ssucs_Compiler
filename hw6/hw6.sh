#!/bin/bash
CURDIR=$(pwd)
IDIR="$CURDIR/testdir"
ODIR="$CURDIR/testresult"

rm -rf "$CURDIR/testresult"
mkdir testresult

for file in "$IDIR"/*.c
do
  FNAME=$(basename "$file")
  cmake-build-debug/./a.out < "$file" >> "$ODIR/$FNAME.txt"
done