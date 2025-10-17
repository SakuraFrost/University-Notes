// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    float Weight1;
    float Weight2;
    float Weight3;
    float Weight4;
    scanf("%f %f %f %f", &Weight1, &Weight2, &Weight3, &Weight4);

    float Height1;
    float Height2;
    float Height3;
    float Height4;
    scanf("%f %f %f %f", &Height1, &Height2, &Height3, &Height4);

    float AvgWeight;
    AvgWeight = (Weight1 + Weight2 + Weight3 + Weight4) / 4;

    float AvgHeight;
    AvgHeight = (Height1 + Height2 + Height3 + Height4) / 4;

    printf("The average weight is %.2f kg.\n", AvgWeight);
    printf("The average height is %.2f cm.", AvgHeight);

    
    return EXIT_SUCCESS;
}