#include "gtest/gtest.h"
extern "C" {
#include "sorting.h"
}

/* SELECTION SORT TESTS */

TEST(SelectionSortTestSuite, EmptyArray) {
  int arr[] = {};
  int nExp = 0;
  selectionSort(arr, nExp);

  size_t nSorted = sizeof(arr) / sizeof(arr[0]);
  ASSERT_EQ(nSorted, nExp);
}

TEST(SelectionSortTestSuite, SingleItem) {
  int arr[] = {1};
  int nExp = 1;
  selectionSort(arr, nExp);

  ASSERT_EQ(arr[0], 1);
}

TEST(SelectionSortTestSuite, TwoItems) {
  int expArr[] = {1, 2};
  int actArr[] = {2, 1};
  selectionSort(actArr, 2);

  size_t nAct = sizeof(expArr) / sizeof(expArr[0]);

  int i;
  for (i = 0; i < nAct; i++) {
    ASSERT_EQ(actArr[i], expArr[i]);
  }
}

TEST(SelectionSortTestSuite, ThreeIdenticalItems) {
  int expArr[] = {2, 2, 2};
  int nExp = 3;
  int actArr[] = {2, 2, 2};
  selectionSort(actArr, nExp);

  int i;
  for (i = 0; i < nExp; i++) {
    ASSERT_EQ(actArr[i], expArr[i]);
  }
}

TEST(SelectionSortTestSuite, NegativeItems) {
  int expArr[] = {-5, -1, 7};
  int nExp = 3;
  int actArr[] = {7, -1, -5};
  selectionSort(actArr, nExp);

  int i;
  for (i = 0; i < nExp; i++) {
    ASSERT_EQ(actArr[i], expArr[i]);
  }
}

TEST(SelectionSortTestSuite, LargeIntegers) {
  int expArr[] = {-2147483648, 0, 55555555, 2147483647};
  int nExp = 4;
  int actArr[] = {2147483647, 55555555, -2147483648, 0};
  selectionSort(actArr, nExp);

  int i;
  for (i = 0; i < nExp; i++) {
    ASSERT_EQ(actArr[i], expArr[i]);
  }
}
