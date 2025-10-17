## Adjust Scores in a List

Write a program that adjusts a list of scores so that:
- All scores below the minimum passing mark are set to that minimum.
- All scores above the maximum possible mark are capped at the maximum.

Use a global variable for `MIN_SCORE = 40` and `MAX_SCORE = 100`.  
Write a function `int adjust(int score)` that returns the corrected score.

### Input
- First line: an integer N (number of scores)
- Second line: N integers (scores)

### Output
- N integers (corrected scores), separated by space

**IMPORTANT:**
- You MUST use global variables for MIN_SCORE and MAX_SCORE.
- You MUST use a separate function `adjust()` to process each score.

**Case 1**

Sample input:

```
6
38 50 120 40 85 25
```

Sample output:

```
40 50 100 40 85 40
```

**Case 2**

Sample input:

```
4
101 99 39 100
```

Sample output:

```
100 99 40 100
```
**Case 3**

Sample input:

```
3
0 999 -100
```

Sample output:

```
40 100 40
```