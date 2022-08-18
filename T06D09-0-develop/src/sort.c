#include <stdio.h>
#define MASSIV 10

int input(int *a, int *n);

void output(int *a, int n);

 
int main() {

}

int input(int *a, int *n) {
    scanf("%d", n);
    if (*n < 1 || *n > MASSIV)
    return 0;

  char c;
  for (int *p = a; p - a < *n; p++) {
    if (scanf("%d%c", p, &c) != 2 || (c != EOF && c != 10 && c != ' '))
      return 0;
  }
  return 1;
}



void output(int *a, int n) {
  for (int *p = a; p - a < n; p++) {
    printf("%d", *p);
    if (n - (p - a) > 1)
      printf(" ");
  }
}