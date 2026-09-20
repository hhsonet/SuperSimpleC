# squid-game-player-manager

## Problem
Manage player scores from a file, update alive/eliminated status, search by player ID, and show prize totals.

## Input
- Data file: `/home/runner/work/SuperSimpleC/SuperSimpleC/squid-game-player-manager/players.txt`
- Menu choices from user (`1..5`)
- Optional player ID for search

## Output
- Player table, search results, alive list, and total prize money from eliminated players

## Sample Run
```text
--- Squid Game, UIU ---
1. Update Player Status Based on Total Score
2. Search Player by ID
3. Display All Players
4. Display Total Prize Money and Alive Players
5. Exit
```

## Compile and Run
```bash
gcc -Wall -Wextra -std=c11 \
  /home/runner/work/SuperSimpleC/SuperSimpleC/squid-game-player-manager/main.c \
  /home/runner/work/SuperSimpleC/SuperSimpleC/squid-game-player-manager/player_io.c \
  /home/runner/work/SuperSimpleC/SuperSimpleC/squid-game-player-manager/player_logic.c \
  -o /tmp/squid_game_manager
(cd /home/runner/work/SuperSimpleC/SuperSimpleC/squid-game-player-manager && /tmp/squid_game_manager)
```

## Edge Cases
- Missing or malformed `players.txt`
- Invalid menu input
- Searching for unknown player ID
