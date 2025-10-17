## Age Check for School Registration

You are writing a function that checks if a student is eligible to register for primary school.

**Rules:**
- A student must be between 6 and 12 years old (inclusive).

Write a function `int is_eligible(int age)` that returns `1` if eligible and `0` otherwise.

Use a loop to read 5 student ages and print "Yes" if eligible, "No" if not.

### Input
- 5 integers representing the ages of 5 students (one per line or space-separated)

### Output
- For each student, print either:
  - `Yes` (if eligible)
  - `No` (if not eligible)

### Sample Input
```
4 6 10 13 8
```

### Sample Output
```
No
Yes
Yes
No
Yes
```

**IMPORTANT:**
- Do NOT use global variables.
- All age checks must be done using the `is_eligible()` function.
- Do not print anything extra.
