// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    float Income;
    float Tax;
    scanf("%f", &Income);

    if (Income < 25000) {
        Tax = Income * 0.1;
        printf("%.2f", Tax);
    }
    else {
        Tax = Income * 0.15;
        printf("%.2f", Tax);
    }

    return EXIT_SUCCESS;
}