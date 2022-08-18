
#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
void squaring(int *a, int n);

int main() {
  int n, data[NMAX];
  if (!input(data, &n)) {
    printf("n/a");
    return 0;
  }
  squaring(data, n);
  output(data, n);
  return 0;
}

int input(int *a, int *n) {
    scanf("%d", n);
    if (*n < 1 || *n > NMAX)
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

void squaring(int *a, int n) {
  for (int *p = a; p - a < n; p++) {
    *p = *p * *p;
  }
}
