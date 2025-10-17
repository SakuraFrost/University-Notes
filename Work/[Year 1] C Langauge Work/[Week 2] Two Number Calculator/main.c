// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>


// Note: README asks for 'Integers', Test Cases asks for 2 Decimal Float
int main() {
    float Number1;
    float Number2;
    char Operator;
    float FinalNumber;

    scanf("%f %f %c", &Number1, &Number2, &Operator);

    switch (Operator) {
        case 42: // *
            FinalNumber = Number1 * Number2;
            printf("%.2f", FinalNumber);
            break;
        case 43: // +
            FinalNumber = Number1 + Number2;
            printf("%.2f", FinalNumber);
            break;
        case 45: // -
            FinalNumber = Number1 - Number2;
            printf("%.2f", FinalNumber);
            break;
        case 47: // /
            FinalNumber = Number1 / Number2;
            printf("%.2f", FinalNumber);
            break;
    }

    return  EXIT_SUCCESS;
}