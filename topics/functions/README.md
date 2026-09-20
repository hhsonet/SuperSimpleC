# topics/functions

## Problem
Compute factorial using a dedicated function to separate logic from input/output.

## Input
- One integer `n` in range `0..12`

## Output
- `n!` value

## Sample Run
```text
Enter n (0-12): 5
Factorial(5) = 120
```

## Compile and Run
```bash
gcc -Wall -Wextra -std=c11 topics/functions/factorial_function.c -o /tmp/factorial_function
/tmp/factorial_function
```

## Edge Cases
- Non-numeric input
- Negative input
- Overflow risk for large `n`
