#include <stdio.h>

void insertion_sort_mut(int array[], int arr_len) {
  int key;
  int i, j;

  for (j = 1; j < arr_len; j++) {
    key = array[j];
    i = j - 1;
    while (i >= 0 && array[i] > key) {
      array[i + 1] = array[i];
      i = i - 1;
    }
    array[i + 1] = key;
  }
}

void insertion_sort_inmut(int src_array[], int dst_array[], int arr_len) {
  int key;
  int i, j;
  // Copy elements from destination array to source array

  for (i = 0; i < arr_len; i++) {
    dst_array[i] = src_array[i];
  }
  // Do insertion sort
  insertion_sort_mut(dst_array, arr_len);
}

void print_array(int array[], int arr_len) {
  for (int i = 0; i < arr_len; i++) {
    printf("%d\t", array[i]);
  }
  printf("\n");
}
