// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    float CurrentTuition, FinalTuition;
    scanf("%f %f", &CurrentTuition, &FinalTuition);
    float Fee = CurrentTuition;
    int CurrentYear = 2023;

    do {
        Fee *= 1.05;
        CurrentYear++;

        printf("Year:%d, Fee: %.2f\n", CurrentYear, Fee);
    }while (Fee < FinalTuition);

    printf("In %d, the final fee is %.2f Baht", CurrentYear, Fee);
    return EXIT_SUCCESS;
}