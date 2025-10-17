// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int a, b, sum;
    scanf("%d %d", &a, &b);
    for (a; a <= b; a++) {
        sum += a;
    }
    printf("%d", sum);
    return EXIT_SUCCESS;
}