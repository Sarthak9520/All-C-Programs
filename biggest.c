#include <stdio.h>

int main() {
  int num1, num2, num3;

  // Input three integer numbers from the user
  printf("Enter the first integer: ");
  scanf("%d", &num1);

  printf("Enter the second integer: ");
  scanf("%d", &num2);

  printf("Enter the third integer: ");
  scanf("%d", &num3);

  // Find the largest of the three numbers
  int largest = num1;

  if (num2 > largest) {
    largest = num2;
  }

  if (num3 > largest) {
    largest = num3;
  }

  // Print the largest number
  printf("The largest number among %d, %d, and %d is %d.\n", num1, num2, num3, largest);

  return 0;
}
