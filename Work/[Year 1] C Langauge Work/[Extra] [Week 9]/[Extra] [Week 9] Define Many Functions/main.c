#include <assert.h>
#include <stdio.h>

// TODO: Place the function prototypes here
int sum(int Integer_One, int Integer_Two);
int square(int Integer_One);
int array_sum(int Array[], int Size);
float array_average(int Array[], int Size);
int max(int Integer_One, int Integer_Two);
int max_index(int Array[], int Size);
int is_even(int Integer_One);
int is_prime(int Integer_One);
int power(int Integer_One, int Integer_Two);

// ======================
// DO NO MODIFY
// Uncomment to test your program
int main(void)
{
    // // Test 1
    // assert(sum(2, 3) == 5);
    // assert(sum(-2, 5) == 3);
    // assert(sum(0, 0) == 0);
    // printf("Q1: Passed\n");

    // // Test 2
    // assert(square(4) == 16);
    // assert(square(-3) == 9);
    // assert(square(0) == 0);
    // printf("Q2: Passed\n");

    // // Test 3
    // int arr1[] = {1, 2, 3, 4, 5};
    // assert(array_sum(arr1, 5) == 15);
    // int arr2[] = {0, -2, 3, 5};
    // assert(array_sum(arr2, 4) == 6);
    // int arr3[] = {0};
    // assert(array_sum(arr3, 1) == 0);
    // printf("Q3: Passed\n");

    // // Test 4
    // int arr4[] = {1, 2, 3, 4, 5};
    // assert(array_average(arr4, 5) == 3.0);
    // int arr5[] = {0, -2, 3, 5};
    // assert(array_average(arr5, 4) == 1.5);
    // int arr6[] = {0};
    // assert(array_average(arr6, 1) == 0.0);
    // printf("Q4: Passed\n");

    // // Test 5
    // assert(max(2, 3) == 3);
    // assert(max(-2, 5) == 5);
    // assert(max(0, 0) == 0);
    // printf("Q5: Passed\n");

    // // Test 6
    // int arr7[] = {1, 2, 3, 4, 5};
    // assert(max_index(arr7, 5) == 4);
    // int arr8[] = {0, -2, 3, 5};
    // assert(max_index(arr8, 4) == 3);
    // int arr9[] = {0};
    // assert(max_index(arr9, 1) == 0);
    // printf("Q6: Passed\n");

    // // Test 7
    // assert(is_even(2) == 1);
    // assert(is_even(5) == 0);
    // assert(is_even(0) == 1);
    // printf("Q7: Passed\n");

    // // Test 8
    // assert(is_prime(2) == 1);
    // assert(is_prime(7) == 1);
    // assert(is_prime(9) == 0);
    // printf("Q8: Passed\n");

    // // Test 9
    // assert(power(2, 3) == 8);
    // assert(power(-2, 5) == -32);
    // assert(power(0, 0) == 1);
    // printf("Q9: Passed\n");

    return 0;
}
// ======================

// TODO: Place the functions here
int sum(int Integer_One, int Integer_Two) {
    int Sum = Integer_One + Integer_Two;
    return Sum;
}

int square(int Integer_One) {
    int Square = Integer_One * Integer_One;
    return Square;
}

int array_sum(int Array[], int Size) {
    int Sum = 0;
    for (int i = 0; i < Size; i++) {
        Sum += Array[i];
    }
    return Sum;
}

float array_average(int Array[], int Size) {
    float Sum = 0;
    for (int i = 0; i < Size; i++) {
        Sum += Array[i];
    }
    float Average = Sum / Size;
    return Average;
}

int max(int Integer_One, int Integer_Two) {
    if (Integer_One > Integer_Two) {return Integer_One;}
    if (Integer_Two > Integer_One) {return Integer_Two;}
    return Integer_One; // Equal
}

int max_index(int Array[], int Size) {
    int Current_Max = Array[0];
    int Max_Index = 0;
    for (int i = 0; i < Size; i++) {
        if (Current_Max < Array[i]) {
            Current_Max = Array[i];
            Max_Index = i;
        }
    }
    return Max_Index;
}

int is_even(int Integer_One) {
    if (Integer_One % 2 == 0) {return 1;}
    return 0;
}

int is_prime(int Integer_One) {
    if (Integer_One == 2) {return 1;}
    else {
        for (int i = 3; i * i <= Integer_One; i+=2) {
            if (Integer_One % i == 0) {return 0;}
        }
    }
    return 1;
}

int power(int Integer_One, int Integer_Two) {
    // Using some Bit magic for faster exponents.
    int Result = 1;
    while (Integer_Two) { // Makes sure it's > 0
        if (Integer_Two & 1) {
            Result *= Integer_One;
        }
        Integer_One *= Integer_One;
        Integer_Two >>= 1;
    }
    return Result;
}