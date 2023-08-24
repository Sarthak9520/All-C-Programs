#include <stdio.h>

int isEven(int num) {
  if (num % 2 == 0) {
    return 1; // Return 1 if the number is even
  } else {
    return 0; // Return 0 if the number is odd
  }
}

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (isEven(number)) {
    printf("%d is an even number.\n", number);
  } else {
    printf("%d is an odd number.\n", number);
  }

  return 0;
}
