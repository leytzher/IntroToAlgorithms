#include "merge_sort.h"
#include <assert.h>
#include <stdio.h>

int main(void) {
  int testArray[] = {12, 11, 13, 5, 6, 7};
  int expectedArray[] = {5, 6, 7, 11, 12, 13};

  int arr_size = sizeof(testArray) / sizeof(testArray[0]);

  // make a copy of the test array to preserve the original
  //
  int copyArray[arr_size];
  for (int i = 0; i < arr_size; i++) {
    copyArray[i] = testArray[i];
  }

  // sort the testArray using merge_sort
  merge_sort(testArray, 0, arr_size - 1);

  printf("Original array\n");

  print_array(copyArray, arr_size);

  printf("Sorted array\n");
  print_array(testArray, arr_size);

  // check
  //
  for (int i = 0; i < arr_size; i++) {
    assert(testArray[i] == expectedArray[i]);
  }

  printf("Test passed: The array is correctly sorted\n");

  return 0;
}
