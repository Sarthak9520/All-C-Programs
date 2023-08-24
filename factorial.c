#include <stdio.h>

unsigned  factorial(int num) {
  if (num == 0 || num == 1) {
    return 1; // Factorial of 0 and 1 is 1
  } else {
    return num * factorial(num - 1);
  }
}

int main() {
  int number;

  printf("Enter a positive integer: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    unsigned  result = factorial(number);
    printf("Factorial of %d is %llu.\n", number, result);
  }

  return 0;
}
