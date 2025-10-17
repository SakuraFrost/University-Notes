// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Number1;
    int Number2;
    int Number3;
    scanf("%d %d %d", &Number1, &Number2, &Number3);

    if (Number1 == Number2 && Number2 == Number3) {
        printf("all the same");
    }
    else if (Number1 != Number2 && Number2 != Number3 && Number1 != Number3) {
        printf("all different");
    }
    else {
        printf("neither");
    }

    return EXIT_SUCCESS;
}