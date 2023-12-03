#include "heapsort.h"
#include <stdio.h>

int main(void) {
  int arr[] = {16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
  // int arr[] = {4, 10, 3, 5, 1};
  int n = sizeof(arr) / sizeof(int);

  printf("+++++++ TESTING MAX_HEAPIFY ++++++++++++++++++++\n\n");
  printf("Original Array: \n");
  printArray(arr, n);

  // Apply max-heapify to build a max-heap from the array
  // start from the last non-leaf node
  for (int i = n / 2 - 1; i >= 0; i--) {
    max_heapify(arr, i, n);
  }
  printf("Max heap: \n");
  printArray(arr, n);

  return 0;
}
