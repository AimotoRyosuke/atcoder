#!/bin/sh

# 引数argで検証ファイルを指定し、gccでコンパイルして実行して削除する
arg=$1

gcc -lstdc++ -o work $arg
./work
rm work
