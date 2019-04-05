#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort: public Sort {
public:
  ShellSort (void* elements, size_t size): Sort(elements, size) {}
  void execute (bool (*lessThan)(void*, int, int));
  inline string name () { return "ShellSort"; }
};

#endif
