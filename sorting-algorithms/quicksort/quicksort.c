// quicksort
//

int partition(int array[], int p, int r) {

  int x = array[r];
  int i = p - 1;
  for (int j = p; j <= r - 1; j++) {
    if (array[j] <= x) {
      i++;
      int tmp = array[j];
      array[j] = array[i];
      array[i] = tmp;
    }
  }
  int tmp2 = array[r];
  array[r] = array[i + 1];
  array[i + 1] = tmp2;
  return i + 1;
}

void quicksort(int array[], int p, int r) {
  int q;
  if (p < r) {
    q = partition(array, p, r);
    quicksort(array, p, q - 1);
    quicksort(array, q + 1, r);
  }
}
