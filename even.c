#include <stdio.h>

int main() {
  int start, end;

  printf("Enter the starting number: ");
  scanf("%d", &start);

  printf("Enter the ending number: ");
  scanf("%d", &end);

  if (start > end) {
    printf("Invalid input: Starting number should be less than or equal to the ending number.\n");
    return 1;
  }

  printf("Even numbers between %d and %d are: ", start, end);

  for (int i = start; i <= end; i++) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }

  printf("\n");

  return 0;
}
