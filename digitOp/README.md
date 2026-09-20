# digitOp

## Problem
Read a two-digit integer and an operator (`+`, `-`, `*`, `/`). Split the number into tens and units, then apply the operator to those two digits.

## Input
- One two-digit positive integer (`10` to `99`)
- One operator character: `+`, `-`, `*`, or `/`

## Output
- A formatted equation with result

## Sample Run
```text
Enter a two-digit positive integer: 56
Enter an operator (+, -, *, /): +
5 + 6 = 11
```

## Compile and Run
```bash
gcc -Wall -Wextra -std=c11 /home/runner/work/SuperSimpleC/SuperSimpleC/digitOp/digit_operation_game.c -o /tmp/digit_op
/tmp/digit_op
```

## Edge Cases
- Non-numeric input
- Number outside `10..99`
- Invalid operator
- Division by zero when units digit is zero
