// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("Unable to print the sequence");
    }
    else {
        int i;
        for (i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
        for (i = n; i >= 2; i--) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    }

    return EXIT_SUCCESS;
}