// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Rows, Columns;
    scanf("%d %d ", &Rows, &Columns);
    int InputMatrix[Rows][Columns], OutputMatrix[Columns][Rows];

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            scanf("%d ", &InputMatrix[i][j]);
        }
    }

    for (int i = 0; i < Columns; i++) {
        for (int j = 0; j < Rows; j++) {
            OutputMatrix[i][j] = InputMatrix[j][i];
        }
    }

    for (int i = 0; i < Columns; i++) {
        for (int j = 0; j < Rows; j++) {
            printf("%d ", OutputMatrix[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}