#include <math.h>

void merge(int array[], int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1];
  int R[n2];

  for (int i = 0; i <= n1; i++) {
    L[i] = array[p + i];
  }
  for (int j = 0; j <= n2; j++) {
    R[j] = array[q + j + 1];
  }

  // set upper limit to a sentinel value
  L[n1] = INFINITY;
  R[n2] = INFINITY;
  int i = 0;
  int j = 0;
}
