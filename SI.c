#include <stdio.h>

int main() {
  float principal, rate, time, simpleInterest;

  // Input principal amount, rate, and time from the user
  printf("Enter principal amount: ");
  scanf("%f", &principal);

  printf("Enter rate (in percentage): ");
  scanf("%f", &rate);

  printf("Enter time (in years): ");
  scanf("%f", &time);

  // Calculate the simple interest
  simpleInterest = (principal * rate * time) / 100;

  // Print the calculated simple interest
  printf("Simple Interest: %.2f\n", simpleInterest);

  return 0;
}
