#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_DIR="$ROOT/build"

rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR"

while IFS= read -r -d '' file; do
  if ! grep -qE '^[[:space:]]*int[[:space:]]+main[[:space:]]*\(' "$file"; then
    continue
  fi

  rel_main="${file#$ROOT/}"
  output_name="${rel_main//\//_}"
  output_name="${output_name%.c}"

  if [[ "$rel_main" == squid-game-player-manager/* ]]; then
    if [[ "$rel_main" != "squid-game-player-manager/main.c" ]]; then
      continue
    fi
    dir="$(dirname "$file")"
    mapfile -d '' sources < <(find "$dir" -maxdepth 1 -name '*.c' -print0)
    gcc -Wall -Wextra -std=c11 "${sources[@]}" -o "$BUILD_DIR/$output_name"
  else
    gcc -Wall -Wextra -std=c11 "$file" -o "$BUILD_DIR/$output_name"
  fi

  echo "Compiled target: $rel_main"
done < <(find "$ROOT" -path "$BUILD_DIR" -prune -o -name '*.c' -print0)

echo "All executable targets compiled successfully."
