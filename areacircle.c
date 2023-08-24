#include<stdio.h>

int main() {
  double radius, area;

  // Input radius from user
  printf("Enter the radius of the circle: ");
  scanf("%lf", &radius);

  // Calculate area of the circle
  area = 3.14159 * radius * radius;

  // Print the calculated area
  printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

  return 0;
}
