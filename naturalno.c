#include <stdio.h>

int main() {
  int n;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1;
  }

  printf("Natural numbers up to %d: ", n);

  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
  }

  printf("\n");

  return 0;
}
