#include <stdio.h>

int main() {
  int n;

  printf("Enter a positive integer 'n': ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1;
  }

  printf("Multiplication tables up to %d:\n", n);

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= n; j++) {
      printf("%2d x %2d = %3d   ", j, i, j * i);
    }
    printf("\n");
  }

  return 0;
}
