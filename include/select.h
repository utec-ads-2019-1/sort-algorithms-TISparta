#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort: public Sort {
public:
  SelectSort (void *elements, size_t size): Sort(elements, size) {}
  void execute (bool (*lessThan)(void*, int, int));
  inline string name () { return "SelectSort"; }
};

#endif
