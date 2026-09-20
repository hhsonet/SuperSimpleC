# bubble_sort_trace

## Problem
Trace bubble sort passes and swaps for a fixed integer array.

## Input
- No runtime input; array is defined in source code

## Output
- Comparison-by-comparison trace and final sorted array

## Sample Run
```text
Pass 1:
Comparing index 0 (5) and 1 (6): No swap
...
Sorted array:
0 1 3 5 6
```

## Compile and Run
```bash
gcc -Wall -Wextra -std=c11 topics/basic/array/bubble_sort_trace.c -o /tmp/bubble_trace
/tmp/bubble_trace
```

## Edge Cases
- Duplicate values
- Negative values if array is changed in code
