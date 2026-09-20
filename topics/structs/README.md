# topics/structs

## Problem
Store student records in structs and compute class average.

## Input
- Number of students (`1..5`)
- For each student: name and score

## Output
- List of students and class average score

## Sample Run
```text
Enter number of students (1-5): 2
Enter name and score for student 1: Asha 80
Enter name and score for student 2: Rafi 90
Class average: 85.00
```

## Compile and Run
```bash
gcc -Wall -Wextra -std=c11 /home/runner/work/SuperSimpleC/SuperSimpleC/topics/structs/student_average.c -o /tmp/student_average
/tmp/student_average
```

## Edge Cases
- Invalid student count
- Invalid score range
- Malformed input
