// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Size;
    scanf("%d", &Size);
    for (int i=0; i<Size; i++) {
        for (int j=0; j<Size-(i+1); j++) {
            printf("  ");
        }
        for (int k=0; k<i+1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}