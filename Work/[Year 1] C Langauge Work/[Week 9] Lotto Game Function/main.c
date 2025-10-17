// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int isWinner(int num1, int num2, int winningSum);

int main() {
    int num1, num2, winningSum;

    do {
        scanf("%d ", &num1);
    }while (1 > num1 || num1 > 10);

    do {
        scanf("%d ", &num2);
    }while (1 > num2 || num2 > 10);

    scanf("%d ", &winningSum);

    printf("%d ", isWinner(num1, num2, winningSum));

    return EXIT_SUCCESS;
}

int isWinner(int num1, int num2, int winningSum) {
    int sum = num1 + num2;
    if (sum == winningSum) {
        return 1;
    }
    return 0;
}