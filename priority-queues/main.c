#include "max-priority-queue.h"
#include "min-priority-queue.h"
#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main(void) {

  int arr3[] = {1, 2, 3, 4, 5};
  int heap_size = 5;
  int arr_len = 5;

  printf("Original array: ");
  printArray(arr3, heap_size);
  printf("Heap size %d\n", heap_size);

  // Extract the maximum element from the heap
  int min = heap_extract_min(arr3, &heap_size);

  printf("Minimum element extracted: %d\n", min);
  printf("Heap after extraction: ");
  printf("Heap size %d\n", heap_size);
  printArray(arr3, heap_size);

  int new_el = 3;
  min_heap_insert(arr3, new_el, &heap_size);

  printf("After inserting %d to the min-heap\n", new_el);
  printArray(arr3, heap_size);

  // convert to min queue:
  printf("Build a max heap\n");
  arr_len = sizeof(arr3) / sizeof(arr3[0]);
  int my_heap[arr_len];
  build_max_heap(arr3, my_heap, arr_len);
  printArray(my_heap, arr_len);

  return 0;
}
