// YOUR CODE HERE

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

double math_func(double x, double y);

int main() {
    double Input1, Input2;
    scanf("%lf %lf", &Input1, &Input2);
    math_func(Input1, Input2);
    return EXIT_SUCCESS;
}

double math_func(double a, double b) {
    // (a^2) - (2*a*b) - 42
    printf("%.2lf\n", (pow(a, 2) - (2*a*b) - 42));
    return EXIT_SUCCESS;
}