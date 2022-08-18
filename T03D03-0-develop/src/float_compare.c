#include <math.h>
#include <stdio.h>

double num();
int main() {
    double res = num();
    const double epsilon = 1e-6;
    // CHANGE THIS IF - AI
    if (res < epsilon) printf("OK!\n");
    return 0;
}
// DO NOT TOUCH THIS FUNCTION - AI
double num() { return (1.0 / 13) * (pow(((2 - 1.0) / (2 + 1.0)), 20)); }
// IT