#ifndef SORT_H
#define SORT_H

#include <string>
#include <algorithm>

using namespace std;

class Sort {
protected:
  void* elements;
  size_t size;

public:
  Sort (void *elements, size_t size): elements(elements), size(size) {}
  virtual void execute (bool (*lessThan)(void*, int, int)) = 0;
  virtual string name() = 0;
  void swap (int i, int j) {
    int* array = (int*)elements;
    std::swap(array[i], array[j]);
  }
};

#endif
