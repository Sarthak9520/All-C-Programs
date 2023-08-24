#include<stdio.h>

int main() {
  float num1, num2, num3, average;

  // Input three float numbers from the user
  printf("Enter three float numbers: ");
  scanf("%f %f %f", &num1, &num2, &num3);

  // Calculate the average
  average = (num1 + num2 + num3) / 3.0;

  // Print the calculated average
  printf("The average of %.2f, %.2f, and %.2f is %.2f\n", num1, num2, num3, average);

  return 0;
}
