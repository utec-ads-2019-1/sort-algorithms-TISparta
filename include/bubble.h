#ifndef BUBBLE_H
#define BUBBLE_H

#include "sort.h"

class BubbleSort: public Sort {
public:
  BubbleSort (void* elements, size_t size): Sort(elements, size) {}
  void execute (void (*compare)(void*, int, int));
  inline string name () { return "BubbleSort"; }
};

#endif
