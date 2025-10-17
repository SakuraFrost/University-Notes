// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Rows, Columns, NumberToLookFor, FlagBecauseImLazy = 0;
    scanf("%d %d ", &Rows, &Columns);
    int Matrix[Rows][Columns];

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            scanf("%d ", &Matrix[i][j]);
        }
    }

    scanf("%d ", &NumberToLookFor);

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            if (Matrix[i][j] == NumberToLookFor) {
                printf("[%d,%d] ", i, j);
                FlagBecauseImLazy = 1;
            }
        }
    }

    if (FlagBecauseImLazy == 0) {
        printf("Not found");
    }

    return EXIT_SUCCESS;
}