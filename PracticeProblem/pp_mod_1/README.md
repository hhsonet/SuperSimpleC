# Practice Problem: Dynamic Equation Solver with Character Analysis

## Problem
Using the last digit of a student ID, select one of four equations, compute integer result `R`, convert result to an alphabet position, and classify the letter as vowel/consonant.

Equation selection:
`equation_number = (last_digit % 4) + 1`

Equations:
1. `R = (a + b) / c + 2c`
2. `R = 2a + 2c / b`
3. `R = a + 2ab + c / a`
4. `R = ac + b - a / c`

## Input
- Last digit of student ID (`0..9`)
- Integers `a`, `b`, `c`

## Output
- Selected equation number
- Integer result `R`
- Letter from `(R % 26) + 1`
- Classification (`vowel` or `consonant`)

## Sample Run
```text
Input: last digit=7, a=4, b=10, c=2
Equation: 4
Result: 16
Letter: Q (consonant)
```

## Compile and Run
- This folder currently contains the assignment statement only.
- Add your implementation file (for example `dynamic_equation_solver.c`) and compile it with:

```bash
gcc -Wall -Wextra -std=c11 /absolute/path/to/dynamic_equation_solver.c -o /tmp/dynamic_equation_solver
/tmp/dynamic_equation_solver
```

## Edge Cases
- Division by zero (`a`, `b`, or `c` depending on selected equation)
- Negative result values before modulo normalization
- Invalid non-integer input
