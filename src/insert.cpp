#include "insert.h"

void InsertSort::execute (bool (*lessThan)(void*, int, int)) {
  for (int i = 0; i < int(size); i++) {
    for (int j = i - 1; j >= 0; j--) {
      if (lessThan(elements, j + 1, j)) {
        Sort::swap(j + 1, j);
      }
    }
  }
}
