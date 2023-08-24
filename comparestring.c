#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];

  printf("Enter the first string: ");
  fgets(str1, sizeof(str1), stdin);
  str1[strcspn(str1, "\n")] = '\0'; // Remove newline

  printf("Enter the second string: ");
  fgets(str2, sizeof(str2), stdin);
  str2[strcspn(str2, "\n")] = '\0'; // Remove newline

  if (strcmp(str1, str2) == 0) {
    printf("The strings are equal.\n");
  } else {
    printf("The strings are not equal.\n");
  }

  return 0;
}
