#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  int equalCount = 0;

  printf("Enter the first string: ");
  gets(str1, sizeof(str1), stdin);
  str1[strlen(str1) - 1] = '\0'; // Remove newline

  printf("Enter the second string: ");
  gets(str2, sizeof(str2), stdin);
  str2[strlen(str2) - 1] = '\0'; // Remove newline

  int len1 = strlen(str1);
  int len2 = strlen(str2);
  int minLen = len1 < len2 ? len1 : len2; // Get the minimum length

  for (int i = 0; i < minLen; i++) {
    if (str1[i] == str2[i]) {
      equalCount++;
    }
  }

  printf("Number of equal characters: %d\n", equalCount);

  return 0;
}
