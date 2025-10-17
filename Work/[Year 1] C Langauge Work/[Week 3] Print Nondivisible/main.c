// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int input1, input2;
    scanf("%d %d", &input1, &input2);

    // First Number
    while (input1 <= input2) {
        if (input1 % 3 != 0) {
            printf("%d", input1);
            break;
        }
        input1++;
    }

    // Bruh moment. Why is there 2 starting numbers????
    input1++;
    
    // Everything Else
    for (; input1 <= input2; input1++) {
        if (input1 % 3 != 0) {
            printf(",%d", input1);
        }
    }
    return EXIT_SUCCESS;
}