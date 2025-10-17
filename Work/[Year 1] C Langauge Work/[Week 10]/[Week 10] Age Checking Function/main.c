#include <stdio.h>

int is_eligible(int age) {
    // TODO: return 1 if age is between 6 and 12 inclusive, otherwise 0
    if (age >= 6 && age <= 12) {
        return 1;
    }
    return 0;
}

int main() {
    //
    //Your code here
    int Age;
    for (int i = 0; i < 5; i++) {
        scanf("%d ", &Age);
        if (is_eligible(Age)) {printf("Yes\n");}
        else {printf("No\n");}
    }
    //
    return 0;
}
