// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Guess;
    int Answer = 42;
    int AttemptCounter = 0;
    do {
        scanf("%d", &Guess);


        if (Guess > Answer) {
            printf("too high\n");
        }
        if (Guess < Answer) {
            printf("too low\n");
        }

        if (Guess == Answer) {
            printf("You WIN :)\n");
            break;
        }

        AttemptCounter++;

        if (AttemptCounter >= 5) {
            printf("You LOSE :(\n");
            break;
        }

    }while (Guess != Answer);
    return EXIT_SUCCESS;
}