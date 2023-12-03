#include "insertion-sort.h"
#include <stdio.h>

#define LIST_LEN 10

int main(void) {
  int src_array[LIST_LEN] = {2, 1, 3, 5, 8, 6, 9, 4, 7, 0};
  int dst_array[LIST_LEN];

  // Print original array
  printf("Original Array\n");
  print_array(src_array, LIST_LEN);

  // unmutable sort
  printf("Unmutable sorting\n");
  insertion_sort_inmut(src_array, dst_array, LIST_LEN);
  printf("Original Array\n");
  print_array(src_array, LIST_LEN);
  printf("Sorted Array\n");
  print_array(dst_array, LIST_LEN);
  printf("Original Array\n");
  print_array(src_array, LIST_LEN);

  // mutable sorting
  printf("Mutable sorting\n");
  printf("Original Array\n");
  print_array(src_array, LIST_LEN);
  insertion_sort_mut(src_array, LIST_LEN);
  printf("Original Array\n");
  print_array(src_array, LIST_LEN);
}
