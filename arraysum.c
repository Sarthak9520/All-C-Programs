#include<stdio.h>

int main() {
  int size;

  // Input the size of the array from the user
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // Declare an array of the given size
  int array[size];

  // Input array elements from the user
  printf("Enter %d integer elements:\n", size);
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  // Calculate the sum of array elements
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }

  // Print the sum
  printf("Sum of array elements: %d\n", sum);

  return 0;
}
