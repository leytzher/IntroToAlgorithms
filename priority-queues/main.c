#include "max-priority-queue.h"
#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main(void) {

  int arr3[] = {10, 7, 5, 3, 1};
  int heap_size = 5;
  int arr_len = 5;

  printf("Original array: ");
  printArray(arr3, heap_size);
  printf("Heap size %d\n", heap_size);

  // Extract the maximum element from the heap
  int max = heap_extract_max(arr3, &heap_size);

  printf("Maximum element extracted: %d\n", max);
  printf("Heap after extraction: ");
  printf("Heap size %d\n", heap_size);
  printArray(arr3, heap_size);

  int arr4[] = {10, 7, 5, 3, 1};
  int heap_size4 = 5;

  printf("Original max-heap: ");
  printArray(arr4, heap_size4);

  // Insert a new key (e.g., 9) into the max-heap
  int key_to_insert = 9;
  max_heap_insert(arr4, key_to_insert, &heap_size4);

  printf("Max-heap after insertion: ");
  printArray(arr4, heap_size4);

  return 0;
}
