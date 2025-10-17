// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Rows, Columns;
    scanf("%d %d ", &Rows, &Columns);
    int Matrix1[Rows][Columns], Matrix2[Rows][Columns], OutputMatrix[Rows][Columns];

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            scanf("%d ", &Matrix1[i][j]);
        }
    }

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            scanf("%d ", &Matrix2[i][j]);
        }
    }

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            OutputMatrix[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            printf("%d ", OutputMatrix[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}