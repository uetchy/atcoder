#!/bin/sh
set -e

DIR_NAME=$(basename $(dirname $1))
BASE_NAME=$(basename $1)
FILE_NAME=$(echo $BASE_NAME | sed 's/\.[^\.]*$//')
EXT_NAME=$(echo $BASE_NAME | sed 's/^.*\.\([^\.]*\)$/\1/')

LANGUAGE="${EXT_NAME}"
CONTEST="${DIR_NAME}"
TASK="${FILE_NAME}"

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

[[ ! -d "${TARGET_DIR}" ]] && mkdir "${TARGET_DIR}"

case "${LANGUAGE}" in
  "cpp" | "c++" | "c")
    g++ -Wall -std=c++14 ${SOURCE}.cpp -o "${BIN_PATH}"
    oj test -d "${TEST_DIR}" --command="${BIN_PATH}" -i
    ;;
  "python" | "py")
    oj test -d "${TEST_DIR}" --command="python3 ${ROOT_DIR}/${SOURCE}.py" -i
    ;;
  "rust" | "rs")
    rustc "${SOURCE}.rs" -o "${BIN_PATH}"
    oj test -d "${TEST_DIR}" --command="${BIN_PATH}" -i
    ;;
  *)
    echo "INVALID LANGUAGE GIVEN"
    ;;
esac