// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n;
    scanf("%d\n", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    printf("\n");

    for (int k = 0; k < n; k++) {
        printf("%d ", arr[n-(k+1)]);
    }

    return EXIT_SUCCESS;
}