#!/bin/sh

set -e

g++ -g knapsack.cpp -o knapsack
time ./knapsack <<EOF
2
2
2
100
EOF
rm -r knapsack knapsack.dSYM
