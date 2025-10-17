// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>
// # include <math.h>

int main() {
    int n;
    float s = 0, SquaredS = 0, MacronX = 0, Sigma = 0;
    scanf("%d\n", &n);
    float arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%f ", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        MacronX += arr[i]/n;
    }

    for (int i = 0; i < n; i++) {
        Sigma += ((arr[i] - MacronX) * (arr[i] - MacronX));
    }

    SquaredS = Sigma/(n-1);
    // s = sqrtf(SquaredS);  Bruh.

    printf("%.2f", SquaredS);

    return EXIT_SUCCESS;
}