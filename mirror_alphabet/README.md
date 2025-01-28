# Mirror Alphabet Program in C

This C program takes a lowercase letter as input and prints its "mirror" in the alphabet. The mirror of a letter is the letter that is symmetrically opposite in the alphabet. For example, the mirror of 'a' is 'z', the mirror of 'b' is 'y', and so on.

## Problem Statement

Write a C program that takes a lowercase letter as input and outputs its mirror letter in the alphabet. The program must only use arithmetic operations to compute the mirror.

### Example Input and Output

- Input: `a`  
  Output: `z`

- Input: `b`  
  Output: `y`

- Input: `c`  
  Output: `x`

## Solution Explanation

The program calculates the mirror letter using the following logic:

- **For any letter 'input'**, the formula used to find its mirror is:  
  ```c
  mirror = 'z' - (input - 'a');
  
### Code
The solution is implemented in `two_digit_fun.c`. You can check the code [here](https://github.com/hhsonet/SuperSimpleC/blob/main/TwoDigitFun/two_digit_fun.c).
