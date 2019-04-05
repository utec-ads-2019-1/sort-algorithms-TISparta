#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort: public Sort {
public:
  InsertSort (void* elements, size_t size): Sort(elements, size) {}
  void execute (bool (*lessThan)(void*, int, int));
  inline string name () { return "InsertSort"; }
};

#endif
