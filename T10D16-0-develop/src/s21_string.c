
#include "s21_string.h"
#include <stdio.h>
#include <stdlib.h>


int s21_strlen (const char *array) {
        int z = 0;
        while(array[z]) ++z;
        return z;
}