# rounding-float

## Problem
Read a floating-point number and round it to the nearest integer without using `round()`.

## Input
- One floating-point value

## Output
- Rounded integer value

## Sample Run
```text
Enter a floating-point number: -3.3
Rounded integer: -3
```

## Compile and Run
```bash
gcc -Wall -Wextra -std=c11 /home/runner/work/SuperSimpleC/SuperSimpleC/rounding-float/rounding-float.c -o /tmp/rounding_float
/tmp/rounding_float
```

## Edge Cases
- Non-numeric input
- Exact `.5` values
- Negative values
