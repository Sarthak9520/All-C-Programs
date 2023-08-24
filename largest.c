#include <stdio.h>

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

  // Find the largest element
  int largest = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > largest) {
      largest = array[i];
    }
  }

  // Print the largest element
  printf("Largest element in the array: %d\n", largest);

  return 0;
}
