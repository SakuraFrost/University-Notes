#include <stdio.h>

// Global variables
int MIN_SCORE = 40;
int MAX_SCORE = 100;

// Function to adjust score to be within range
int adjust(int score) {
    //
    //Your code here
    if (score < MIN_SCORE) {return MIN_SCORE;}
    else if (score > MAX_SCORE) {return MAX_SCORE;}
    else {return score;}
    //
}

int main() {
    //
    //Your code here
    // Size
    int N;
    scanf("%d ", &N);

    // 1D Matrix
    int Scores[N];
    for (int i = 0; i < N; i++) {
        scanf("%d ", &Scores[i]);
    }

    // Adjust & Print
    for (int i = 0; i < N; i++) {
        printf("%d ", adjust(Scores[i]));
    }
    //
}
