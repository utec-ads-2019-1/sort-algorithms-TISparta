#include "select.h"

void SelectSort::execute (bool (*lessThan)(void*, int, int)) {
  for (int i = 0; i < int(size); i++) {
    int minIndex = i;
    for (int j = i + 1; j < int(size); j++) {
      if (lessThan(elements, j, minIndex)) {
        minIndex = j;
      }
    }
    Sort::swap(i, minIndex);
  }
}
