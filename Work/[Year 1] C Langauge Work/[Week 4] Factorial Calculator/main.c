// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Number;
    scanf("%d", &Number);
    int FactorialAnswer = 1;

    if (Number > 0) {
        for (; Number >= 1; Number--) {
            FactorialAnswer *= Number;
        }
        printf("%d", FactorialAnswer);
    }
    else if (Number == 0) {
        printf("1");
    }
    else {
        printf("Error");
    }
    return EXIT_SUCCESS;
}