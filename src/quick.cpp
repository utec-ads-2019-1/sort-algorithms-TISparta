#include "quick.h"
#include <vector>

void quickSort (void* elements, int l, int r, bool (*lessThan)(void*, int, int)) {
  if (l >= r) return;
  int pib = r;
  vector <int> left, right;
  for (int i = l; i <= r; i++) {
    if (i == pib) continue;
    if (lessThan(elements, i, pib)) {
      left.push_back(((int*)(elements))[i]);
    } else {
      right.push_back(((int*)(elements))[i]);
    }
  }
  int pos = l;
  int* array = (int*)elements;
  for (int elem: left) {
    array[pos] = elem;
    pos++;
  }
  array[pos] = array[pib];
  pib = pos;
  pos++;
  for (int elem: right) {
    array[pos] = elem;
    pos++;
  }
  quickSort(elements, l, pib - 1, lessThan);
  quickSort(elements, pib + 1, r, lessThan);
}

void QuickSort::execute (bool (*lessThan)(void*, int, int)) {
  quickSort(elements, 0, size - 1, lessThan);
}
