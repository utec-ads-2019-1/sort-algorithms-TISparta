#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort: public Sort {
public:
  QuickSort (void* elements, size_t size): Sort(elements, size) {}
  void execute (bool(*lessThan)(void*, int, int));
  inline string name () { return "QuickSort"; }
};

#endif
