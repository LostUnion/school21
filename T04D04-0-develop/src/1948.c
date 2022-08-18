#include <stdio.h>
#include <math.h>

int main () {
    int a, b;
    printf("Please, enter you number => ");
    scanf("%d", &b);

    for (a = 2; a <= b/2; a++ ) {
        if (b%a == 0) {
            printf( " %d\n", a);
        }
    }
    printf("%d\n", b);
    return 0;
}