#include <stdio.h>

int main() {
  int n, i = 1, term = 1;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  while (i <= n) {
    printf("%d ", term);
    term += 2; // Increment the term by 2 for the next odd number
    i++;
  }

  printf("\n");

  return 0;
}
