#include "printing.h"
#include <stdio.h>

/**
 * @brief prints elements of @p arr separated by whitespace.
 *
 * @param arr the array to print.
 * @param size size of the array to print.
 */
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}