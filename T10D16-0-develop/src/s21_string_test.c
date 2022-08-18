#include "s21_string.h"
#include <stdio.h>
#include <stdlib.h>

void s21_strlen_test();

int main() {
    s21_strlen_test();
    return 0;
}

void s21_strlen_test() {
    char *cell_0 = "Hello, my friend!";
    printf(cell_0);
    printf("\n");
    int out = s21_strlen(cell_0);
    printf("%d\n", out);
    if(out == 17) {
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
    printf("\n");

    char *cell_1 = "89134723398";
    printf(cell_1);
    printf("\n");
    out = s21_strlen(cell_1); 
    printf("%d\n", out);
    if(out == 11) {
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
    printf("\n");

    char *cell_2 = "";
    printf(cell_2);
    printf("\n");
    out = s21_strlen(cell_2);
    printf("%d\n", out);
    if (out == 0) {
        printf("SUCCESS");
    } else {
        printf("FAIL");
    }
}