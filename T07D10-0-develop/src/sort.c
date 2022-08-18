#include <stdio.h>
#include <stdlib.h>
#define MASSIVE 10

int input(int **arr_0, int *arr_use);
void BubbleSort(int *arr_0, int n);
void output_result(int *arr_0);

int main() {
  int arr_use, (*data);
  if (input(&data, &arr_use) == 0) {
    printf("n/a");
    return 0;
    } else {
      BubbleSort(data, arr_use);
      output_result(data);
      free(data);
    }
  return 0;
}

int input(int **arr_0, int *arr_use) {
  *arr_use = MASSIVE;
  *arr_0 = (int *)malloc(*arr_use * sizeof(int));
  if (scanf("%d", arr_use) == 1) {
    for (int *p = *arr_0; p - *arr_0 < *arr_use; p++) {
      if (scanf("%d", p) == 1) {
      } else {
        *arr_use = 0;
      }
    }
  }
  return *arr_use;
}

void BubbleSort(int *arr_0, int arr_use) {
  int temp = 0;
  for (int i = 0; i < arr_use - 1; i++) {
    for (int j = 0; j < arr_use - i - 1; j++) {
      if (arr_0[j] > arr_0[j + 1]) {
        temp = arr_0[j];
        arr_0[j] = arr_0[j + 1];
        arr_0[j + 1] = temp;
      }
    }
  }
}

void output_result(int *arr_0) {
  for (int i = 0; i < MASSIVE; i++)
  printf("%d ", arr_0[i]);
}
