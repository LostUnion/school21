#include <stdio.h>

int main() {
    double x, y;
    scanf("%lf%lf", &x, &y);
    if ((x * x) + (y * y) <= 25) {
        printf("GOTCHA\n");
    } else {
        printf("MISS\n");
    }
    return 0;