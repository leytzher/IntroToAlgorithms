#include <math.h>

void max_heapify(int array[], int i, int heap_size) {
  // Get child nodes from node i
  int left = i << 1;        // equivalent to 2*i
  int right = (i << 1) + 1; // equivalent to 2*i+1
  int parent = i >> 1;      // equivalent to (i/2)
  int largest = i;          // assume the current node is the largest
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
