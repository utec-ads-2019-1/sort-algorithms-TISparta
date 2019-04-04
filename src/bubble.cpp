#include "bubble.h"

void BubbleSort::execute (void (*compare)(void*, int, int)) {
  for (int i = 0; i < int(size); i++) {
    for (int j = i + 1; j < int(size); j++) {
      compare(elements, i, j);
    }
  }
}
