# Rounding a Floating-Point Number to the Nearest Integer

This C program demonstrates how to round a floating-point number to the nearest integer using only arithmetic operations. It avoids using the `round()` function and instead applies basic mathematical logic for both positive and negative numbers.

## Problem Statement

Write a C program that takes a floating-point number as input and outputs its nearest integer. The program must not use any built-in rounding functions (like `round()`). Instead, solve the problem using only arithmetic operations.

### Example Input and Output

1. **Input**: `4.7`
   - **Output**: `5`
   
2. **Input**: `-3.3`
   - **Output**: `-3`

3. **Input**: `5.5`
   - **Output**: `6`

## Solution Explanation

The program rounds numbers using the following logic:
- For **positive numbers**, add `0.5` and then truncate the result (i.e., cast it to an integer). This moves the value closer to the nearest integer.
- For **negative numbers**, subtract `0.5` and then truncate. This ensures rounding toward the nearest integer as well.

### Code

The solution is implemented in `rounding-float.c`. You can check the code [here](rounding-float.c).

## How to Compile and Run

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/HamudiHasanSonet/SuperSimpleC.git
