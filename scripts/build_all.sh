#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
BUILD_DIR="$ROOT/build"

rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR"

while IFS= read -r -d '' file; do
  rel_path="${file#$ROOT/}"
  if [[ "$rel_path" == squid-game-player-manager/main.c || "$rel_path" == squid-game-player-manager/player_io.c || "$rel_path" == squid-game-player-manager/player_logic.c ]]; then
    continue
  fi
  output_name="${rel_path//\//_}"
  output_name="${output_name%.c}"
  gcc -Wall -Wextra -std=c11 "$file" -o "$BUILD_DIR/$output_name"
  echo "Compiled: $rel_path"
done < <(find "$ROOT" -name '*.c' -print0)

gcc -Wall -Wextra -std=c11 \
  "$ROOT/squid-game-player-manager/main.c" \
  "$ROOT/squid-game-player-manager/player_io.c" \
  "$ROOT/squid-game-player-manager/player_logic.c" \
  -o "$BUILD_DIR/squid-game-player-manager"
echo "Compiled: squid-game-player-manager (multi-file)"

echo "All C files compiled successfully."
