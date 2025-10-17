// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

void print_c(int RowAmount, int RepeatAmount, char Letter);

int main() {
    int RowAmount, RepeatAmount;
    char Letter;
    scanf("%d %d %c ", &RowAmount, &RepeatAmount, &Letter);
    print_c(RowAmount, RepeatAmount, Letter);
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