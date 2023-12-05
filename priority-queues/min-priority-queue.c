#include <math.h>
#include <stdio.h>

int heap_minimum(int array[]) {
  // the top node element of a min-heap is the minimum
  return array[0];
}

void min_heapify(int array[], int index, int heap_size) {
  int left = 2 * index + 1;
  int right = 2 * index + 2;
  int smallest = 0;

  if (left <= heap_size && array[left] < array[smallest]) {
    smallest = left;
  } else {
    smallest = index;
  }

  if (right <= heap_size && array[right] < array[smallest]) {
    smallest = right;
  }
  if (smallest != index) {
    int tmp = array[index];
    array[index] = array[smallest];
    array[smallest] = tmp;
    min_heapify(array, smallest, heap_size);
  }
}

int heap_extract_min(int array[], int *heap_size) {
  if (*heap_size <= 0) {
    printf("Error: Heap underflow\n");
    return -1;
  }
  int min = heap_minimum(array);
  array[0] = array[*heap_size - 1];
  (*heap_size)--;
  min_heapify(array, 0, *heap_size);
  return min;
}

void heap_decrease_key(int array[], int i, int key) {
  int parent = i / 2;
  if (key > array[i]) {
    printf("New key is larger than current key");
    return;
  }
  array[i] = key;

  while (i > 0 && array[parent] > array[i]) {
    int tmp = array[i];
    array[i] = array[parent];
    array[parent] = tmp;
    i = parent;
    parent = i / 2;
  }
}

void min_heap_insert(int array[], int key, int *heap_size) {
  (*heap_size)++;
  array[*heap_size - 1] = 9999999;
  heap_decrease_key(array, *heap_size - 1, key);
}
