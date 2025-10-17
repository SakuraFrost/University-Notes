// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int score;
    do {
        scanf("%d", &score);
        if (70 <= score && score <= 100) {
            printf("Outstanding\n");
            break;
        }
        if (50 <= score && score < 70) {
            printf("Pass\n");
            break;
        }
        if (0 <= score && score < 50) {
            printf("Fail\n");
            break;
        }
        else {
            printf("invalid score\n");
        }
    } while (1);
    return EXIT_SUCCESS;
}