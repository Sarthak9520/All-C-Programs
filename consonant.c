#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isConsonant(char c) {
  c = tolower(c); // Convert to lowercase for case-insensitive comparison
  return (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u');
}

int main() {
  char input[100];
  int consonantCount = 0;

  printf("Enter a string: ");
  gets(input, sizeof(input), stdin);
  input[strlen(input) - 1] = '\0'; // Remove newline

  for (int i = 0; input[i] != '\0'; i++) {
    if (isConsonant(input[i])) {
      consonantCount++;
    }
  }

  printf("Number of consonants in the string: %d\n", consonantCount);

  return 0;
}
