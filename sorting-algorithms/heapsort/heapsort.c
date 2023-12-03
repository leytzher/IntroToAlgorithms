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
  if ((left <= heap_size) && (array[left] > array[largest])) {
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

void build_max_heap(int array[], int arr_size) {
  for (int i = (arr_size / 2) - 1; i >= 0; i--) {
    max_heapify(array, i, arr_size);
  }
}

void heapsort(int array[], int arr_size) {
  build_max_heap(array, arr_size);
  for (int i = arr_size - 1; i > 0; i--) {
    int tmp = array[0];
    array[0] = array[i];
    array[i] = tmp;
    max_heapify(array, 0, i - 1);
  }
}
