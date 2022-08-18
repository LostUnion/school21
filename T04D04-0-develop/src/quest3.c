#include <stdio.h>

int fibonacci(int a) {
  if (a <= 1) {
    return a;
  }

  int previousFib = 0, currentFib = 1;
  for (int i = 0; i < a - 1; i++) {
    int newFib = previousFib + currentFib;
    previousFib = currentFib;
    currentFib = newFib;
  }

  return currentFib;
}

int main(void) {
  int a = 0;
  printf("Enter a number to get the Fibonacci number => ");
  scanf("%d", &a);
  printf("Fibonacci number => %d\n", fibonacci(a));

  return 0;
}