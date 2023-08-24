#include <stdio.h>

int main() {
  int number, originalNumber, remainder, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1;
  }

  originalNumber = number;

  while (originalNumber != 0) {
    remainder = originalNumber % 10;
    sum += remainder;
    originalNumber /= 10;
  }

  printf("Sum of the digits of %d is: %d\n", number, sum);

  return 0;
}
