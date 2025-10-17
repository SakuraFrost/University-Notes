// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int Width, Height;
    char Character;

    scanf("%d %d %c", &Width, &Height, &Character);

    for (int i=0; i<Height; i++) {
        for (int j=0; j<Width; j++) {
            printf("%c ", Character);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}