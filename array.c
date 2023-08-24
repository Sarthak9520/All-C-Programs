#include<stdio.h>

int main() {
  int numbers[5]; // Declare an array of 5 integers

  // Initialize the array elements
  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  numbers[4] = 50;

  // Print the array elements
  printf("Array elements: ");
  for (int i = 0; i < 5; i++)
{
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}
