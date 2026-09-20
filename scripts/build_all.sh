#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_DIR="$ROOT/build"

rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR"

while IFS= read -r -d '' file; do
  if ! grep -qE '^int[[:space:]]+main[[:space:]]*\(' "$file"; then
    continue
  fi

  rel_main="${file#$ROOT/}"
  dir="$(dirname "$file")"
  output_name="${rel_main//\//_}"
  output_name="${output_name%.c}"

  mapfile -d '' sources < <(find "$dir" -maxdepth 1 -name '*.c' -print0)
  gcc -Wall -Wextra -std=c11 "${sources[@]}" -o "$BUILD_DIR/$output_name"
  echo "Compiled target: $rel_main"
done < <(find "$ROOT" -path "$BUILD_DIR" -prune -o -name '*.c' -print0)

echo "All executable targets compiled successfully."
