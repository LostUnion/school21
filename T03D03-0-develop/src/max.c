#include <stdio.h>

int max (int number_one, int number_two);

int main () {
    int number_one, number_two;
    char check;
    printf ("Please, enter two numbers => ");
    scanf ("%d%d%c", &number_one, &number_two, &check);
    if (check != 10) {
        printf ("n/a\n");
    } else {
        if (number_one == number_two) {
            printf("You have entered two identical values. Error!\n");
        } else {
            int large;
            large= max(number_one, number_two);
            printf("%d\n", large);
        }
    }
}

int max(int number_one, int number_two) {
    if (number_one > number_two) {
        return number_one;
    } else {
        return number_two;
    }
}