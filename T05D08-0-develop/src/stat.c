#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);

void output_result(int max_v, int min_v, double mean_v, double variance_v);

int main() {
  int n, data[NMAX];
  if (!input(data, &n)) {
    printf("n/a");
  } else {
    output(data, n);
    output_result(max(data, n), min(data, n), mean(data, n), variance(data, n));

    return 0;
  }
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
  printf("\n");
}

int max(int *a, int n) {
  int c = *a;
  for (int *p = a; p - a < n; p++) {
    if (c < *p)
      c = *p;
  }
  return c;
}

int min(int *a, int n) {
  int q = *a;
  for (int *p = a; p - a < n; p++) {
    if (q > *p)
      q = *p;
  }
  return q;
}

double mean(int *a, int n) {
  double x = 0;
  for (int *p = a; p - a < n; p++) {
    x = x + *p;
  }
  return x / n;
}

double variance(int *a, int n) {
  double value = 0;
  double middle = mean(a, n);
  for (int *p = a; p - a < n; p++) {
    double residual = *p - middle;
    value += residual * residual;
  }
  return value / n;
}
void output_result(int max_v, int min_v, double mean_v, double variance_v) {
  printf("%d ", max_v);
  printf("%d ", min_v);
  printf("%.6lf ", mean_v);
  printf("%.6lf", variance_v);
}
