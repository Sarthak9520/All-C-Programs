#include <stdio.h>
#include <string.h>

int main() {
  char input[100];
  char copied[100];

  printf("Enter a string: ");
  fgets(input, sizeof(input), stdin);
  input[strlen(input) - 1] = '\0'; // Remove newline

  // Copy the input string to the 'copied' string
  strcpy(copied, input);

  printf("Original string: %s\n", input);
  printf("Copied string: %s\n", copied);

  return 0;
}
