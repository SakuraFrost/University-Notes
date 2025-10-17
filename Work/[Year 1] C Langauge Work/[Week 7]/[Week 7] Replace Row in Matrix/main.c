// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Rows, Columns, RowIndexToReplace, RowNumberToReplace;
    scanf("%d %d ", &Rows, &Columns);
    int Matrix[Rows][Columns], TempRow[Columns];

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            scanf("%d ", &Matrix[i][j]);
        }
    }
    

    scanf("%d ", &RowIndexToReplace);

    for (int i = 0; i < Columns; i++) {
        scanf("%d ", &TempRow[i]);
    }

    for (int i = 0; i < Columns; i++) {
        Matrix[RowIndexToReplace][i] = TempRow[i];
    }

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }


    return EXIT_SUCCESS;
}