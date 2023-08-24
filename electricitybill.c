#include <stdio.h>

int main() {
  int units;
  float totalBill;

  printf("Enter the number of units consumed: ");
  scanf("%d", &units);

  if (units <= 50) {
    totalBill = units * 0.50;
  } else if (units <= 150) {
    totalBill = 25 + (units - 50) * 0.75;
  } else if (units <= 250) {
    totalBill = 100 + (units - 150) * 1.20;
  } else {
    totalBill = 220 + (units - 250) * 1.50;
  }

  // Additional fixed charges and taxes can be added if needed
  // For simplicity, we're only considering the basic tariff here

  printf("Total electricity bill: %.2f\n", totalBill);

  return 0;
}
