#!/bin/bash
yacc -d yacc.y
lex lex.l
cc y.tab.c lex.yy.c

DIR="./testdir"
for file in "$DIR"/*.c
do
  echo ""
  echo "Parsing $file..."
  ./a.out < "$file"
done