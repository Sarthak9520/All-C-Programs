#include <stdio.h>

int main() {
  float x, y;

  // Input the coordinates from the user
  printf("Enter the X coordinate: ");
  scanf("%f", &x);

  printf("Enter the Y coordinate: ");
  scanf("%f", &y);

  // Determine the quadrant or axis
  if (x > 0 && y > 0) {
    printf("The point (%.2f, %.2f) is in the first quadrant.\n", x, y);
  } else if (x < 0 && y > 0) {
    printf("The point (%.2f, %.2f) is in the second quadrant.\n", x, y);
  } else if (x < 0 && y < 0) {
    printf("The point (%.2f, %.2f) is in the third quadrant.\n", x, y);
  } else if (x > 0 && y < 0) {
    printf("The point (%.2f, %.2f) is in the fourth quadrant.\n", x, y);
  } else if (x == 0 && y != 0) {
    printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
  } else if (x != 0 && y == 0) {
    printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);
  } else {
    printf("The point (%.2f, %.2f) is at the origin.\n", x, y);
  }

  return 0;
}
