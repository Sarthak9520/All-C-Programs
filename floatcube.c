#include<stdio.h>

int main() {
  float number, cube;

  // Input a float number from the user
  printf("Enter a float number: ");
  scanf("%f", &number);

  // Calculate the cube
  cube = number * number * number;

  // Print the calculated cube
  printf("The cube of %.2f is %.2f\n", number, cube);

  return 0;
}
