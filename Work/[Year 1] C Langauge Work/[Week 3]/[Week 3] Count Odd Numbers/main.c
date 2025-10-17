// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>

int main() {
    char input = 'a';
    int count = 0;
    int sum = 0;
    while (input != 'q') {
        scanf("%c", &input);
        
        switch (input) {
            case '1':
                sum += (input - 48);
                count++;
                break;
            case '3':
                sum += (input - 48);
                count++;
                break;
            case '5':
                sum += (input - 48);
                count++;
                break;
            case '7':
                sum += (input - 48);
                count++;
                break;
            case '9':
                sum += (input - 48);
                count++;
                break;
        }
    }
    printf("%d:%d", count, sum);
    return EXIT_SUCCESS;
}