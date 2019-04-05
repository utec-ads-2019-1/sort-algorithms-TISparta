#ifndef TESTER_H
#define TESTER_H

#include <stdexcept>
#include <iostream>
#include <assert.h>
#include "sort.h"
#include "bubble.h"
#include "select.h"
#include "insert.h"
#include "shell.h"
#include "quick.h"
#include "merge.h"

using namespace std;

enum Algorithm {
  bubblesort,
  selectsort,
  insertsort,
  shellsort,
  quicksort,
  mergesort
};

class Tester {
private:
  static Sort* getSort(Algorithm, void*, size_t);
public:
  static void integerSorts(int*, size_t, bool (*)(void*, int, int));
};

#endif
