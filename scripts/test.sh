#!/bin/sh
set -e


QUESTION=d
CONTEST=abc141
LANGUAGE=rs

TASK="${CONTEST}_${QUESTION}"
ROOT_DIR="$(dirname $0)/.."
TARGET_DIR="${ROOT_DIR}/target"
BIN_PATH="${TARGET_DIR}/${TASK}"
SOURCE="${ROOT_DIR}/contests/${CONTEST}/${TASK}"
TEST_DIR="${ROOT_DIR}/tests/${CONTEST}/${TASK}"

if [[ ! -d "${TEST_DIR}" ]]
then
  mkdir -p "${TEST_DIR}"
  oj dl "https://${CONTEST}.contest.atcoder.jp/tasks/${TASK}" -d "${TEST_DIR}"
fi

case "${LANGUAGE}" in
  "cpp" | "c++" | "c")
    g++ -Wall -std=c++14 ${SOURCE}.cpp -o "${BIN_PATH}"
    oj test -d "${TEST_DIR}" --command="${BIN_PATH}"
    ;;
  "python" | "py")
    oj test -d "${TEST_DIR}" --command="python3 ${ROOT_DIR}/${SOURCE}.py"
    ;;
  "rust" | "rs")
    rustc "${SOURCE}.rs" -o "${BIN_PATH}"
    oj test -d "${TEST_DIR}" --command="${BIN_PATH}"
    ;;
  *)
    echo "INVALID LANGUAGE GIVEN"
    ;;
esac