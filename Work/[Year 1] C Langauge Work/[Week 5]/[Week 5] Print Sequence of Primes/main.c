// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {
    int EndingNumber;
    while (1) {
        scanf("%d", &EndingNumber);
        if (2 <= EndingNumber && EndingNumber <= 1000) {
            for (int i=2; i <= EndingNumber ; i++) {
                int isPrime = 1; // Flag or else it spam prints 2
                // Prime Number Finding Formula: Check Between 2 and the Squre Root of Itself, thus needing MATHS.
                for (int j=2; j<=sqrt(i); j++) {
                    if (i % j == 0) {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime == 1) {
                    printf("%d ", i);
                }
            }
            break;
        }
        else {
        }
    }
    
    return EXIT_SUCCESS;
}