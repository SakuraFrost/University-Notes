// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Size;
    scanf("%d", &Size);

    for (int i=0; i<Size; i++) {
        for (int j=0; j<i+1; j++) {
            printf("1 ");
        }
        for (int k=0; k<Size-(i+1); k++) {
            printf("0 ");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}