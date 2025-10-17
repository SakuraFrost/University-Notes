// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Start, End, Step, Current;
    scanf("%d %d %d", &Start, &End, &Step);
    Current = Start;
    int FirstNumberHardcoding101 = 1;

    do {
        if (FirstNumberHardcoding101 == 1) {
            // Hardcoding First Number lolz
            printf("%d", Current);
            Current += Step;
            FirstNumberHardcoding101 = 0;
        }
        else {
            printf("-%d", Current);
            Current +=Step;
        }
    }while (Current <= End);
    return EXIT_SUCCESS;
}