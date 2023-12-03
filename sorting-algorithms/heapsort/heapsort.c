#include <stdio.h>

void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void max_heapify(int array[], int i, int heap_size) {
  // Get child nodes from node i
  int left = 2 * i + 1; // note that indices in CLRS are not zero-based
  int right = 2 * i + 2;
  //  int parent = i >> 1;      // equivalent to (i/2)
  int largest = i; // assume the current node is the largest
  //
  if ((left <= heap_size) && (array[left] > array[i])) {
    largest = left;
  } else {
    largest = i;
  }

  if ((right <= heap_size) && (array[right] > array[largest])) {
    largest = right;
  }
  if (largest != i) {
    // exchange array[i] with array[largest]
    int tmp = array[i];
    array[i] = array[largest];
    array[largest] = tmp;
    max_heapify(array, largest, heap_size);
  }
}
