// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Height;
    scanf("%d", &Height);

    // Top Half
    for (int i=0; i<Height; i++) {
        for (int j=0; j<i+1; j++) {
            printf("1 ");
        }
        for (int k=0; k<Height-(i+1); k++) {
            printf("0 ");
        }
        printf("\n");
    }

    //Bottom Half
    for (int l=Height-1; l>0; l--) {
        for (int m=0; m<l; m++) {
            printf("1 ");
        }
        for (int n=0; n<Height-l; n++) {
            printf("0 ");
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}