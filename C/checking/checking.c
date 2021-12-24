#include "checking.h"

int isPalindrome(char str[]) {
  int length;
  for (length = 0; str[length]; ++length) // Get String Length
    continue;
  for (int i = 0, j = length - 1; j - i > 0; ++i, --j) {
    if (str[i] != str[j])
      return 0;
  }
  return 1;
}
