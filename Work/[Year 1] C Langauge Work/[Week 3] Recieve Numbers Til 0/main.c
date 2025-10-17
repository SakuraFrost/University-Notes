// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int num;
    num = 1;
    while (num != 0) {
        scanf("%d", &num);
        printf("input: %d\n", num);
    }
    printf("finish");
    return EXIT_SUCCESS;
}