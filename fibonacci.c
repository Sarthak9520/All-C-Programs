#include <stdio.h>

int main() {
  int n, firstTerm = 0, secondTerm = 1, nextTerm;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci series up to %d terms: ", n);

  for (int i = 1; i <= n; i++) {
    printf("%d, ", firstTerm);

    nextTerm = firstTerm + secondTerm;
    firstTerm = secondTerm;
    secondTerm = nextTerm;
  }

  printf("\n");

  return 0;
}
