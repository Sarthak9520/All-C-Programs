#include <stdio.h>

int main() {
  char gender;

  printf("Enter your gender (M/F): ");
  scanf(" %c", &gender); // Note the space before %c to consume any leading whitespace

  switch (gender) {
  case 'M':
  case 'm':
    printf("You are Male.\n");
    break;
  case 'F':
  case 'f':
    printf("You are Female.\n");
    break;
  default:
    printf("Invalid input. Please enter 'M' or 'F'.\n");
    return 1;
  }

  return 0;
}
