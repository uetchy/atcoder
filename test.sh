#!/bin/sh

set -e

CONTEST=${CONTEST:?"Specify CONTEST"}
TASK=${TASK:?"Specify TASK"}

SOURCE=./$CONTEST/$TASK.cpp

rm -rf test a.out
oj dl "https://${CONTEST}.contest.atcoder.jp/tasks/${TASK}"
g++ -Wall -std=c++14 ${SOURCE}
oj test
