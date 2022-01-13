#include "checking.h"
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void convertToLowerCase(char string[]) {
  do {
    *string = (char) tolower(*string);
  } while (*++string);
}

// see: https://stackoverflow.com/a/1726321/
void removeSpaces(char str[]) {
  char *d = str;
  do {
    while (*d == ' ') {
      ++d;
    }
  } while ((*str++ = *d++));
}

int isPalindrome(char str[]) {

  if (str == NULL) {
    return 0;
  }

  convertToLowerCase(str);
  removeSpaces(str);

  unsigned long long len = strlen(str);

  for (int i = 0; i < len / 2; i++) {
    char left = str[i];
    char right = str[len - 1 - i];

    if (left != right) {
      printf("%s is not a palindrome.\n", str);
      printf("%c != %c", left, right);
      return 0;
    }
  }

  printf("%s is a palindrome.\n", str);
  return 1;
}