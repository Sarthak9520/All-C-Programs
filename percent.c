#include <stdio.h>

int main() {
  float totalMarks, obtainedMarks, percentage;

  printf("Enter the total marks: ");
  scanf("%f", &totalMarks);

  printf("Enter the marks obtained: ");
  scanf("%f", &obtainedMarks);

  if (obtainedMarks < 0 || obtainedMarks > totalMarks) {
    printf("Invalid input: Marks obtained must be between 0 and %.2f\n", totalMarks);
  } else {
    percentage = (obtainedMarks / totalMarks) * 100;
    printf("Percentage: %.2f%%\n", percentage);
  }

  return 0;
}
