#include "sorting.h"

void swap(int *xp, int *yp) {
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

/**
 * @brief sorts @p arr using selection sort algorithm.
 *
 * This function searches for the smallest value in @p arr and swaps it with
 * the first element in @p arr. It repeats this process with the not yet
 * sorted part of @p arr.
 * @param arr the array to be sorted in place.
 * @param n the size of the array to be sorted.
 * @note has a time complexity of O(n^2)
 * @warning this is inefficient on larger lists
 */
void selectionSort(int arr[], int n) {
  int i, j, indexOfMin;

  for (i = 0; i < n - 1; i++) {
    indexOfMin = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[indexOfMin]) {
        indexOfMin = j;
      }
    }

    swap(&arr[indexOfMin], &arr[i]);
  }
}

/**
 * @brief sorts @p arr using insertion sort algorithm.
 *
 * This function iterates over the elements in @p arr and inserts them
 * at the correct spot in the already traversed (sorted) part of the array.
 * @param arr the array to be sorted in place.
 * @param n the size of the array to be sorted.
 */
void insertionSort(int arr[], int n) {
  // TODO: implement using TDD method
}

/**
 * @brief sorts @p arr using bubble sort algorithm.
 *
 * This function repeatedly takes two elements of @p arr and swaps them,
 * if they are not in ascending order.
 * @param arr the array to be sorted in place.
 * @param n the size of the array to be sorted.
 * @warning this implementation is buggy, do not use
 */
void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}