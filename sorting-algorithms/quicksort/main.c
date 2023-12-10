#include "quicksort.h"
#include <stdbool.h>
#include <stdio.h>

bool isSorted(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    if (array[i] > array[i + 1]) {
      return false;
    }
  }
  return true;
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main(void) {
  int array1[] = {10, 7, 8, 9, 1, 5};
  int size1 = sizeof(array1) / sizeof(array1[0]);
  printf("Original array 1: ");
  printArray(array1, size1);
  quicksort(array1, 0, size1 - 1);
  printf("Sorted array 1: ");
  printArray(array1, size1);

  if (isSorted(array1, size1)) {
    printf("Test passed\n");
  } else {
    printf("Test failed\n");
  }

  int array2[] = {10, 20, 30, 40, 5, 60};
  int size2 = sizeof(array2) / sizeof(array2[0]);
  printf("Original array 2: ");
  printArray(array2, size2);
  quicksort(array2, 0, size2 - 1);
  printf("Sorted array 2: ");
  printArray(array2, size2);
  if (isSorted(array2, size2)) {
    printf("Test passed\n");
  } else {
    printf("Test failed\n");
  }

  return 0;
}
