## Compute Sample Variance

Write a program to first receive a 1D array (e.g., `arr`) of size `n`. Then it computes the sample variance according to the following equation:

![Alt text](image.png)

**Hint**: You first need to calculate the mean of the array, and then use such mean to compute the sample variance.

**Note**: You can assume that the `n` from the test cases will always be greater than or equal to 2. So you do not need to validate the input.

<hr>

**Case 1**

Input:
```
5
1 24 51 88 97
```

Expected outputs:
```
1676.70
```

**Case 2**

Inputs:
```
2
1 1
```

Expected outputs:
```
0.00
```

**Case 3**

Inputs:
```
8
3 9 18 17 5 2 -43 0
```

Expected outputs:
```
366.55
```
