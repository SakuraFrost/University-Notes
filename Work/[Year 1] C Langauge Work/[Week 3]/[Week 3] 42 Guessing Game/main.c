// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    int input1, input2, input3, input4, sumofinputs, sumofwins = 0;
    
    int SubstitueofWhileTrueDo = 1;

    while (SubstitueofWhileTrueDo == 1) {
        
        scanf("%d %d %d %d", &input1, &input2, &input3, &input4);
        sumofinputs = input1 + input2 + input3 + input4;

        if (sumofinputs == 42) {
            printf("You win!\n");
            sumofwins++;
        } else {
            printf("You lose!\n");
            SubstitueofWhileTrueDo = 0;
        }
    }

    printf("Number of wins: %d\n", sumofwins);

    return EXIT_SUCCESS;
}