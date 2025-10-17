#include <stdio.h>

int MIN_VAL = -4;
int MAX_VAL = 42;

int clip_value(int v);

int main(void) {
    // printf("Hello World!"); // lol wut
    // Scan for Size of Array
    int Size_Of_Array;
    scanf("%d ", &Size_Of_Array);

    // Matrix Creation
    int Input_Matrix[Size_Of_Array];
    for (int i = 0; i < Size_Of_Array; i++) {
        scanf("%d ", &Input_Matrix[i]);
    }

    // Clip Values
    for (int i = 0; i < Size_Of_Array; i++) {
        printf("%d ", clip_value(Input_Matrix[i]));
    }

    return 0;
}

int clip_value(int v) {
    if (v < MIN_VAL) {return MIN_VAL;}
    else if (v > MAX_VAL) {return MAX_VAL;}
    else {return v;}
}