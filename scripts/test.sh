#!/bin/sh

set -e

CONTEST=abc137
TASK=abc137_c

ROOT_DIR="$(dirname $0)/.."
SOURCE="${ROOT_DIR}/${CONTEST}/${TASK}.cpp"

oj dl "https://${CONTEST}.contest.atcoder.jp/tasks/${TASK}" -d "tests/${TASK}"
g++ -Wall -std=c++14 ${SOURCE}
oj test -d "tests/${TASK}" -j4

# cat<<EOD | ./a.out
# 1400
# EOD