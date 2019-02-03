#!/bin/sh
# install: pip3 install online-judge-tools

set -e

CONTEST=${CONTEST:-abc117}
TASK=${TASK:-abc117_c}

SOURCE=./$CONTEST/$TASK.cpp

rm -rf test a.out
oj dl "https://${CONTEST}.contest.atcoder.jp/tasks/${TASK}"
g++ -Wall -std=c++14 $SOURCE
oj test
