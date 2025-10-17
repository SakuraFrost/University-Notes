// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, SearchedNumber;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    scanf("%d", &SearchedNumber);

    for (int i = 0; i <= n; i++) {
        if (arr[i] == SearchedNumber) {
            printf("%d", i);
            break;
        }
        if (i == n) {
            printf("Not found");
            break;
        }
    }

    return EXIT_SUCCESS;
}