#!/bin/sh

set -e

CONTEST=abc136
TASK=abc136_b

ROOT_DIR="$(dirname $0)/.."
SOURCE="${ROOT_DIR}/${CONTEST}/${TASK}.cpp"

oj dl "https://${CONTEST}.contest.atcoder.jp/tasks/${TASK}"
g++ -Wall -std=c++14 ${SOURCE}
oj test -i

cat<<EOD | ./a.out
1400
EOD