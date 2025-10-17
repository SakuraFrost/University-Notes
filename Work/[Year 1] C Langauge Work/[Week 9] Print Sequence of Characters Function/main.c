// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

void print_c(int RowAmount, int RepeatAmount, char Letter);

int main() {
    int RowAmount = 1, Amount;
    char Letter;
    scanf("%d %c ", &Amount, &Letter);
    print_c(RowAmount, Amount, Letter);
    return EXIT_SUCCESS;
}

void print_c(int RowAmount, int RepeatAmount, char Letter) {
    for (int i = 0; i < RowAmount; i++) {
        for (int j = 0 ; j < RepeatAmount; j++) {
            printf("%c", Letter);
        }
        printf("\n");   
    }
}