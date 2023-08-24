#include <stdio.h>
#include <string.h>

int main() {
  char input[100];

  printf("Enter a string: ");
  gets(input);

  // Remove the newline character from input
  input[strcspn(input, "\n")] = '\0';

  // Using strrev function to reverse the string
  char *reversed = strrev(input);

  printf("Reversed string: %s\n", reversed);

  return 0;
}
