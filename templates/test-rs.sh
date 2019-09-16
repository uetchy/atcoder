#!/bin/sh
set -e

ROOT_DIR="$(dirname $0)"
FILE_PATH="${ROOT_DIR}/template.rs"
BIN_PATH="${ROOT_DIR}/rustbin"

rustup run 1.15.1 rustc "${FILE_PATH}" -o "${BIN_PATH}"
"${BIN_PATH}" <<EOD
3 5
Str hey
32
1.1 3.3 5.5
a
b
c
1 1 1
2 2 2
3 3 3
EOD