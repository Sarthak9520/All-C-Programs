#include <stdio.h>

int main() {
  int side1, side2, side3;

  printf("Enter the three side lengths: ");
  scanf("%d %d %d", &side1, &side2, &side3);

  if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
    if (side1 == side2 && side2 == side3) {
      printf("It is an equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
      printf("It is an isosceles triangle.\n");
    } else {
      printf("It is a scalene triangle.\n");
    }
  } else {
    printf("The given side lengths cannot form a triangle.\n");
  }

  return 0;
}
