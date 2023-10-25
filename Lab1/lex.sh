#!/bin/zsh
flex ./lexical_analyer.l
gcc -o test lex.yy.c -g
./test < ./testset.c