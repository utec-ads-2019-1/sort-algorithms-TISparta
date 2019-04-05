#include "bubble.h"

void BubbleSort::execute (bool (*lessThan)(void*, int, int)) {
  for (int i = 0; i < int(size); i++) {
    for (int j = i + 1; j < int(size); j++) {
      if (lessThan(elements, j, i)) {
        Sort::swap(j, i);
      }
    }
  }
}
