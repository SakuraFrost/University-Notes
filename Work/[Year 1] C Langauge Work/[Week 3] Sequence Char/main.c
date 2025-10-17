// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    char start, end;
    char current;
    scanf("%c ", &start);
    scanf("%c", &end);

    if (start < end) {
        for ( current = start ; current <= end; current++) {
            printf("%c ", current);
        }
    }
    else {
        for ( current = start; current <= 'Z' ; current++) {
            printf("%c ", current);
        }
        for ( current = 'A'; current <= end; current++) {
            printf("%c ", current);
        }
    }

    return EXIT_SUCCESS;
}