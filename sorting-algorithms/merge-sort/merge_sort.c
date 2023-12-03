#include <stdio.h>

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
}

void merge(int array[], int p, int q, int r) {
  // number of elements of each sub-array
  int n1 = q - p + 1;
  int n2 = r - q;
  int i, j, k;
  // make 2 new subarrays (left and right sub-arrays)
  int left[n1], right[n2];

  // copy array[p...q] into the left array
  for (i = 0; i < n1; i++) {
    left[i] = array[p + i];
  }

  // copy array[q+1...r] into the right array

  for (j = 0; j < n2; j++) {
    right[j] = array[q + j + 1];
  }

  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (left[i] <= right[j]) {
      array[k] = left[i];
      i++;
    } else {
      array[k] = right[j];
      j++;
    }
    k++;
  }

  // copy remaining elelment of left[], if any
  while (i < n1) {
    array[k] = left[i];
    i++;
    k++;
  }

  // copy remaining elements of right[], if any
  while (j < n2) {
    array[k] = right[j];
    j++;
    k++;
  }
}

void merge_sort(int array[], int p, int r) {
  int q;
  if (p < r) {
    // q is the middle index
    q = (p + r) / 2;

    merge_sort(array, p, q);
    merge_sort(array, q + 1, r);
    merge(array, p, q, r);
  }
}
