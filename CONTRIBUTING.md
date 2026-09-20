# Contributing to SuperSimpleC

## Folder rules

Each exercise folder should contain:
1. Exactly one clear learning objective
2. One `README.md` using the standard template
3. One primary source file with a name that matches the exercise topic

## README template

Each exercise README should include these sections in order:
1. Problem
2. Input
3. Output
4. Sample Run
5. Compile and Run
6. Edge Cases

## Code quality expectations

- Use simple, beginner-readable C
- Validate user input (`scanf` return values and range checks)
- Print clear error messages for invalid inputs
- Keep one responsibility per file whenever possible

## Verification

Before opening a PR, run:

```bash
bash /home/runner/work/SuperSimpleC/SuperSimpleC/scripts/build_all.sh
```

If you add new source files, ensure they compile with `gcc -Wall -Wextra -std=c11`.
