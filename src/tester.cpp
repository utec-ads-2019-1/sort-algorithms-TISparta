#include "tester.h"
#include "color.h"

Sort* Tester::getSort (Algorithm sort, void *array, size_t size) {
  switch (sort) {
    case bubblesort: return new BubbleSort(array, size);
    case selectsort: return new SelectSort(array, size);
    case insertsort: return new InsertSort(array, size);
    case shellsort: return new ShellSort(array, size);
    case quicksort: return new QuickSort(array, size);
    case mergesort: return new MergeSort(array, size);
    default: throw invalid_argument("Not a valid sort");
  }
}

void Tester::integerSorts (int *array, size_t size, bool (*lessThan)(void*, int, int)) {
  Sort* sort;
  int temp[size];

  Algorithm algorithm[] = {
    bubblesort,
    selectsort,
    insertsort,
    shellsort,
    quicksort,
    mergesort
  };

  size_t numberOfAlgorithms = sizeof(algorithm) / sizeof(algorithm[0]);

  for (int i = 0; i < int(numberOfAlgorithms); i++) {
    copy(array, array + size, temp);
    sort = getSort(algorithm[i], temp, size);
    sort -> execute(lessThan);
    if (not is_sorted(temp, temp + size)) {
      std::cerr << Color::red << "Fail. " + sort -> name() << endl << Color::normal;
    } else {
      std::cout << Color::green << "OK. " << sort -> name() << endl << Color::normal;
    }
  }
}
