// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Height;
    scanf("%d", &Height);

    for (int i=0; i<Height; i++) {
        if (i % 2 != 0) { // Print 1 First
            for (int j=0; j<i+1; j++) {
                if (j % 2 != 0) {
                    printf("1 ");
                }
                else {
                    printf("0 ");
                }
            }
        }
        else {
            for (int j=0; j<i+1; j++) { // Print 0 First
                if (j % 2 == 0) {
                    printf("1 ");
                }
                else {
                    printf("0 ");
                }
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}