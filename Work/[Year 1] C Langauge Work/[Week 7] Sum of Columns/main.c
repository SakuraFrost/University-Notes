// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Rows, Columns, TempNumber;
    scanf("%d %d ", &Rows, &Columns);
    int InputMatrix[Rows][Columns], OutputMatrix[Rows];

    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            scanf("%d ", &InputMatrix[i][j]);
        }
    }

    for (int i = 0; i < Columns; i++) {
        TempNumber = 0;
        for (int j = 0; j < Rows; j++) {
            TempNumber += InputMatrix[j][i];
        }
        OutputMatrix[i] = TempNumber;
    }

    for (int i = 0; i < Columns; i++) {
        printf("%d ", OutputMatrix[i]);
    }

    return EXIT_SUCCESS;
}