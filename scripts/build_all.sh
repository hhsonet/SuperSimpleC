#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_DIR="$ROOT/build"

rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR"

while IFS= read -r -d '' file; do
  rel_path="${file#$ROOT/}"
  output_name="${rel_path//\//_}"
  output_name="${output_name%.c}"
  gcc -Wall -Wextra -std=c11 "$file" -o "$BUILD_DIR/$output_name"
  echo "Compiled: $rel_path"
done < <(find "$ROOT" -name '*.c' -print0)

echo "All C files compiled successfully."
