#include <stdio.h>

int main() {
    int number_one, number_two;
    printf("Please, enter number one => ");
    scanf("%d", &number_one);
    printf("Good, now enter number two => ");
    scanf("%d", &number_two);

    printf("%d", number_one + number_two);
    printf(" %d", number_one - number_two);
    printf(" %d", number_one * number_two);

    if (number_two == 0) {
        printf(" n/a\n");
    }
    else {
        printf(" %d\n", number_one / number_two);
    }
    return 0;
}
