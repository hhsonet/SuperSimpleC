# topics/files

## Problem
Read a file path and count the number of lines in that file.

## Input
- A file path string

## Output
- Total line count

## Sample Run
```text
Enter file path: /tmp/sample.txt
Line count: 3
```

## Compile and Run
```bash
gcc -Wall -Wextra -std=c11 topics/files/line_counter.c -o /tmp/line_counter
/tmp/line_counter
```

## Edge Cases
- File does not exist
- Empty file
- Permission denied
