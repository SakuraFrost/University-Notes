// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    char Letter;
    scanf("%c", &Letter);

    if (Letter >= 65 && Letter <= 90) {
        Letter += 32;
        printf("%c", Letter);
    }
    else if (Letter >= 97 && Letter <=122) {
        Letter -= 32;
        printf("%c", Letter);
    }
    else {
        printf("%c", Letter);
    }

    return EXIT_SUCCESS;
}