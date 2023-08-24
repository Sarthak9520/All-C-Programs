#include <stdio.h>

int main() {
  char ch;

  printf("Enter a character: ");
  scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace

  // Convert the character to lowercase for case-insensitive comparison
  ch = tolower(ch);

  if ((ch >= 'a' && ch <= 'z') && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
    printf("The character is a vowel.\n");
  } else if (ch >= 'a' && ch <= 'z') {
    printf("The character is a consonant.\n");
  } else {
    printf("Invalid input. Please enter an alphabet.\n");
    return 1;
  }

  return 0;
}
