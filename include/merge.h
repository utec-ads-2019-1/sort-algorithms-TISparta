#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class MergeSort: public Sort {
public:
  MergeSort (void* elements, size_t size): Sort(elements, size) {}
  void execute (bool (*lessThan)(void*, int, int));
  inline string name () { return "MergeSort"; }
};

#endif
