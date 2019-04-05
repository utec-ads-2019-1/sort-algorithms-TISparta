#include <iostream>
#include <string>
#include "mocker.h"
#include "tester.h"

using namespace std;

#define NUMBER_OF_TESTS 10

Mocker mocker;

void executeTests();
void printArray(int *, size_t);
void compareIntegers(void *, void *);

int main (int argc, char* argv[]) {
  cout << "===========================================================" << endl;
  cout << "\tSorts Practice" << endl;
  cout << "===========================================================" << endl << endl;
  executeTests();
  return EXIT_SUCCESS;
}

bool lessThan (void *elements, int i, int j) {
  int* array = (int*) elements;
  return array[i] < array[j];
}

void executeTests () {
  for (int i = 0; i < NUMBER_OF_TESTS; i++) {
    size_t size = mocker.generateRandomInt();
    int* array = mocker.generateRandomIntArray(size);
    cout << "ITERATION " << i + 1 << endl;
    Tester::integerSorts(array, size, lessThan);
  }
}

void printArray (int *array, size_t size) {
  for (int i = 0; i < int(size); i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
