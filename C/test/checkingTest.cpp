#include "gtest/gtest.h"
extern "C" {
#include "checking.h"
}

TEST(PalindromeTestSuite, EmptyString) {
  char str[] = "";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 1);
}

TEST(PalindromeTestSuite, Null) {
  char *str = NULL;
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 0);
}

TEST(PalindromeTestSuite, SingleCharacter) {
  char str[] = "a";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 1);
}

TEST(PalindromeTestSuite, PalindromeEven) {
  char str[] = "lagerregal";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 1);
}

TEST(PalindromeTestSuite, NotAPalindrome) {
  char str[] = "computer";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 0);
}

TEST(PalindromeTestSuite, PalindromeUneven) {
  char str[] = "abbba";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 1);
}

TEST(PalindromeTestSuite, PalindromeEvenCaseSensitive) {
  char str[] = "Lagerregal";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 1);
}

TEST(PalindromeTestSuite, PalindromeWhiteSpaceSymmetric) {
  char str[] = "Ein Esel lese nie";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 1);
}

TEST(PalindromeTestSuite, NotAPalindromeWhiteSpaceSymmetric) {
  char str[] = "Ein Rabe lese nie";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 0);
}

TEST(PalindromeTestSuite, PalindromeWhiteSpaceAsymmetric) {
  char str[] = "Erika feuert nur untreue Fakire";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 1);
}

TEST(PalindromeTestSuite, NotAPalindromeWhiteSpaceAsymmetric) {
  char str[] = "Erika feuert nur treue Fakire";
  int actual = isPalindrome(str);

  ASSERT_EQ(actual, 0);
}

// TODO: special/non-ASCII case, e.g. "Eine güldne, gute Tugend: lüge nie!"