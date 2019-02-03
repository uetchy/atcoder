#!/bin/sh

set -e

g++ -g daydream.cpp -o daydream
time ./daydream <<EOF
dreameraserd
EOF
