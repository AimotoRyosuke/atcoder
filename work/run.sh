#!/bin/sh

# 引数argを受け取り、gccでコンパイルして実行して削除する
arg=$1

gcc -lstdc++ -o work $arg
./work
rm work
