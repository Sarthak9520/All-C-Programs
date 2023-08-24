#include <stdio.h>

int main() {
  int num1, num2;

  // Input two integer numbers from the user
  printf("Enter the first integer: ");
  scanf("%d", &num1);

  printf("Enter the second integer: ");
  scanf("%d", &num2);

  // Check if the numbers are equal or not
  if (num1 == num2) {
    printf("The numbers %d and %d are equal.\n", num1, num2);
  } else {
    printf("The numbers %d and %d are not equal.\n", num1, num2);
  }

  return 0;
}
