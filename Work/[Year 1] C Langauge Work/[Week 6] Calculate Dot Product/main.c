// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, DotProduct = 0, IterativeProduct;
    scanf("%d ", &n);

    int A[n], B[n];

    for (int i = 0; i < n; i++) {
        scanf("%d ", &A[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d ", &B[i]);
    }

    for (int i = 0; i < n; i++) {
        IterativeProduct = A[i] * B[i];
        DotProduct += IterativeProduct;
    }

    printf("%d", DotProduct);

    return EXIT_SUCCESS;
}