#include "printing.h"
#include "sorting.h"
#include <stdio.h>

int main() {
  int arrSelection[] = {42, 420, 1337, 0, -666, 7};
  int nSelection = sizeof(arrSelection) / sizeof(arrSelection[0]);

  int arrInsertion[] = {42, 420, 1337, 0, -666, 7};
  int nInsertion = sizeof(arrInsertion) / sizeof(arrInsertion[0]);

  int arrBubble[] = {42, 420, 1337, 0, -666, 7};
  int nBubble = sizeof(arrBubble) / sizeof(arrBubble[0]);

  printf("Let's sort with selection sort!\n");
  /* everything cool here */
  selectionSort(arrSelection, nSelection);
  printArray(arrSelection, nSelection);

  /* to be implemented with TDD */
  printf("Let's sort with insertion sort!\n");
  insertionSort(arrInsertion, nInsertion);
  printArray(arrInsertion, nInsertion);

  /* this is buggy */
  printf("Let's sort with bubble sort!\n");
  bubbleSort(arrBubble, nBubble);
  printArray(arrBubble, nBubble);

  return 0;
}