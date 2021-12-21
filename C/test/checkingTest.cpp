#include "gtest/gtest.h"
extern "C" {
#include "checking.h"
}

TEST(PalindromeTestSuite, EmptyString) {
  char str[] = "";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 1);
}
