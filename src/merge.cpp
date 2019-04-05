#include "merge.h"
#include <vector>

void merge (void* elements, int l, int m, int r, bool (*lessThan)(void*, int, int)) {
  vector <int> arr;
  int i = l, j = m + 1;
  while (i <= m and j <= r) {
    if (lessThan(elements, i, j)) {
      arr.push_back(((int*)elements)[i]);
      i++;
    } else {
      arr.push_back(((int*)elements)[j]);
      j++;
    }
  }
  while (i <= m) {
    arr.push_back(((int*)elements)[i]);
    i++;
  }
  while (j <= r) {
    arr.push_back(((int*)elements)[j]);
    j++;
  }
  int* array = (int*) elements;
  for (int pos = l; pos <= r; pos++) {
    array[pos] = arr[pos - l];
  }
}

void mergeSort (void* elements, int l, int r, bool (*lessThan)(void*, int, int)) {
  if (l >= r) return;
  int m = (l + r) / 2;
  mergeSort(elements, l, m, lessThan);
  mergeSort(elements, m + 1, r, lessThan);
  merge(elements, l, m, r, lessThan);
}

void MergeSort::execute (bool (*lessThan)(void*, int, int)) {
  mergeSort(elements, 0, size - 1, lessThan);
}
