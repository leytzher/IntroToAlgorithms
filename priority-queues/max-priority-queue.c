#include <math.h>
#include <stdio.h>

int heap_maximum(int array[]) { return array[0]; }

void max_heapify(int array[], int index, int heap_size) {
  int left = 2 * index + 1;
  int right = 2 * index + 2;
  int largest = 0;

  if (left <= heap_size && array[left] > array[largest]) {
    largest = left;
  } else {
    largest = index;
  }
  if (right <= heap_size && array[right] > array[largest]) {
    largest = right;
  }
  if (largest != index) {
    // exchange array[i] with array[largest]
    int tmp = array[index];
    array[index] = array[largest];
    array[largest] = tmp;
    max_heapify(array, largest, heap_size);
  }
}

int heap_extract_max(int array[], int *heap_size) {
  if (*heap_size <= 0) {
    printf("Error: Heap underflow");
    return -1;
  }
  int max = heap_maximum(array);
  array[0] = array[*heap_size - 1];
  (*heap_size)--;
  max_heapify(array, 0, *heap_size);
  return max;
}

void heap_increase_key(int array[], int i, int key) {
  int parent = i / 2;
  if (key < array[i]) {
    printf("New key is smaller than current key");
    return;
  }
  array[i] = key;

  while (i > 0 && array[parent] < array[i]) {
    int tmp = array[i];
    array[i] = array[parent];
    array[parent] = tmp;
    i = parent;
    parent = i / 2;
  }
}

void max_heap_insert(int array[], int key, int *heap_size) {
  (*heap_size)++;
  array[*heap_size - 1] = -99999999;
  heap_increase_key(array, *heap_size - 1, key);
}

void build_max_heap(int src_array[], int dst_array[], int array_size) {
  int *heap_size;
  *heap_size = 0;

  for (int i = 0; i < array_size; i++) {
    max_heap_insert(dst_array, src_array[i], heap_size);
  }
}
