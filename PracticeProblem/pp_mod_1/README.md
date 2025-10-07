# Practice Problem: Dynamic Equation Solver with Character Analysis

## Problem Overview
Create a program that dynamically selects and solves mathematical equations based on your student ID, converts numerical results into alphabetic characters, and performs character classification.

---

## Problem Requirements

### Part 1: Equation Selection
Your program must determine which equation to solve based on your student ID.

**Selection Algorithm:**
```
equation_number = (last_digit_of_student_ID % 4) + 1
```

This will yield a number between 1 and 4, corresponding to one of the four equations below.

---

### Part 2: Equation Definitions

Your program should implement all four equations and select the appropriate one based on Part 1:

| Equation | Formula | Description |
|----------|---------|-------------|
| **1** | `R = (a + b) / c + 2c` | Sum-based division with multiplier |
| **2** | `R = 2a + 2c / b` | Scaled addition with division |
| **3** | `R = a + 2ab + c / a` | Polynomial-style expression |
| **4** | `R = ac + b - a / c` | Product-sum with subtraction |

**Important Notes:**
- All variables (a, b, c) must be integers
- Use integer division (truncate decimals)
- Variable **R** represents the result

---

### Part 3: Result Transformation

After calculating the result **R**, transform it into an alphabet position:

1. **Normalize the result:** `position = (R % 26) + 1`
   - This ensures the position falls between 1 and 26
   
2. **Map to uppercase letter:**
   - 1 → A, 2 → B, 3 → C, ..., 26 → Z

---

### Part 4: Character Classification

Determine whether the resulting letter is a **vowel** or **consonant**:
- **Vowels:** A, E, I, O, U
- **Consonants:** All other letters

---

## Input Specifications

Your program should accept:
1. **Last digit of student ID** (integer: 0-9)
2. **Three integer values** (a, b, c) for the equation variables

---

## Output Specifications

Your program must display:
1. The selected equation number
2. The calculated result (R)
3. The resulting uppercase letter
4. Character classification (vowel or consonant)

**Output Format:**
```
Equation: [number]
Result: [R]
Letter: [letter] ([vowel/consonant])
```

---

## Complete Example

### Scenario
- **Student ID:** 0112520027
- **Last digit:** 7
- **User inputs:** a = 4, b = 10, c = 2

### Step-by-Step Solution

**Step 1: Determine equation number**
```
equation_number = (7 % 4) + 1
equation_number = 3 + 1 = 4
```

**Step 2: Apply Equation 4**
```
R = ac + b - a/c
R = (4 × 2) + 10 - (4 / 2)
R = 8 + 10 - 2
R = 16
```

**Step 3: Convert to alphabet position**
```
position = (16 % 26) + 1
position = 16 + 1 = 17
```

**Step 4: Map position to letter**
```
Position 17 = Q
```

**Step 5: Classify character**
```
Q is not a vowel → Q is a consonant
```

### Expected Output
```
Equation: 4
Result: 16
Letter: Q (consonant)
```

---

## Additional Test Cases

Test your program with these cases to ensure correctness:

| Last Digit | Equation | a | b | c | Expected R | Position | Letter | Type |
|------------|----------|---|---|---|------------|----------|--------|------|
| 3 | 4 | 5 | 8 | 2 | 16 | 17 | Q | consonant |
| 0 | 1 | 6 | 9 | 3 | 11 | 12 | L | consonant |
| 5 | 2 | 4 | 2 | 4 | 12 | 13 | M | consonant |
| 2 | 3 | 3 | 5 | 6 | 35 | 10 | J | consonant |

---

## Implementation Guidelines

### Required Functions/Methods (Recommended Structure)

1. **`determineEquation(lastDigit)`** - Returns equation number
2. **`solveEquation(equationNum, a, b, c)`** - Calculates result R
3. **`convertToLetter(result)`** - Converts number to letter
4. **`classifyCharacter(letter)`** - Determines vowel/consonant
5. **`main()`** - Orchestrates the program flow

### Edge Cases to Consider
- Division by zero (validate that c ≠ 0 and b ≠ 0)
- Negative results (test how modulo handles negative numbers)
- Large input values


**Good luck!**
