#include "heapsort.h"
#include <stdio.h>

int main(void) {
  int arr[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
  // int arr[] = {4, 10, 3, 5, 1};
  int n = sizeof(arr) / sizeof(int);

  printf("+++++++ TESTING HEAPSORT ++++++++++++++++++++\n\n");
  printf("Original Array: \n");
  printArray(arr, n);
  heapsort(arr, n);
  printArray(arr, n);

  return 0;
}
