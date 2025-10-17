// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int n, Min = 0, Max = 0, AttemptMin = 0, AttemptMax = 0;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            AttemptMax = arr[i];
            if (i == 0) {
                Max = AttemptMax;
            }
            if (Max < AttemptMax) {
                Max = AttemptMax;
            }
        }

        if (i % 2 == 1) {
            AttemptMin = arr[i];
            if (i == 1) {
                Min = AttemptMin;
            }
            if (Min > AttemptMin) {
                Min = AttemptMin;
            }
        }        
    }

    printf("%d %d", Min, Max);

    return EXIT_SUCCESS;
}