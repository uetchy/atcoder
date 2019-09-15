#!/bin/sh

set -e

g++ -g some_sums.cpp -o some_sums
time ./some_sums <<EOF
20
2
5
EOF
