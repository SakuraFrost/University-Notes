# Replace a row in a matrix

Write a program to replace a row in an input matrix.

First, the program receives an input matrix (i.e., 2-D array) from a user. The following is an example of the input matrix of size 4x5 (i.e., 4 rows and 5 columns):

```
4 5
42 44 12 8 36 
19 10 7 49 34 
47 24 15 18 1 
23 45 39 29 38
```

Then it asks the user to speicify which of the input matrix to be replaced using a **row index**. Here the user specify the third row (i.e., the row index of 2).

```
2
```

After that, the program will ask the users to specify the values for all columns in that rows.

```
4 39 29 33 1
```

Finally, the program prints out the output matrix:

```
42 44 12 8 36 
19 10 7 49 34 
4 39 29 33 1     // replace this row
23 45 39 29 38 
```

<hr>

**Case 1**

Inputs:

```
7 3
9 24 26 
16 29 31 
33 25 37 
32 47 32 
24 5 45 
29 44 38 
20 21 41 
0
1 45 44 
```

Expected outputs:

```
1 45 44 
16 29 31 
33 25 37 
32 47 32 
24 5 45 
29 44 38 
20 21 41 
```

**Case 2**

Inputs:

```
3 7
28 37 38 26 7 34 5 
18 16 38 48 41 18 23 
0 1 22 8 30 20 37 
2
47 5 14 13 29 20 46 
```

Expected outputs:

```
28 37 38 26 7 34 5 
18 16 38 48 41 18 23 
47 5 14 13 29 20 46 
```

**Case 3**

Inputs:

```
2 2
25 46 
10 13 
1
44 40 
```

Expected outputs:

```
25 46 
44 40 
```