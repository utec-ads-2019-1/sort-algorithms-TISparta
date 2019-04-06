#include "shell.h"
#include <vector>

void ShellSort::execute (bool (*lessThan)(void*, int, int)) {
  vector <int> gaps = {701, 301, 132, 57, 23, 10, 4, 1};
  for (int gap: gaps) {
    for (int i = gap; i < int(size); i++) {
      int pos = i;
      for (int j = i - gap; j >= 0; j -= gap) {
        if (lessThan(elements, pos, j)) {
          Sort::swap(pos, j);
          pos = j;
          continue;
        }
        break;
      }
    }
  }
}
