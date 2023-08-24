
#include <stdio.h>

int calculateDayOfWeek(int year, int month, int day) {
  if (month < 3) {
    month += 12;
    year--;
  }

  int K = year % 100;
  int J = year / 100;

  int dayOfWeek = (day + 13 * (month + 1) / 5 + K + K / 4 + J / 4 + 5 * J) % 7;

  return (dayOfWeek + 6) % 7; // Convert Sunday (0) to 7
}

int main() {
  int year, month, day;

  printf("Enter the year (e.g., 2023): ");
  scanf("%d", &year);

  printf("Enter the month (1-12): ");
  scanf("%d", &month);

  printf("Enter the day (1-31): ");
  scanf("%d", &day);

  if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
    printf("Invalid date\n");
    return 1;
  }

  int dayOfWeek = calculateDayOfWeek(year, month, day);

  switch (dayOfWeek) {
  case 1:
    printf("The day of the week is Monday.\n");
    break;
  case 2:
    printf("The day of the week is Tuesday.\n");
    break;
  case 3:
    printf("The day of the week is Wednesday.\n");
    break;
  case 4:
    printf("The day of the week is Thursday.\n");
    break;
  case 5:
    printf("The day of the week is Friday.\n");
    break;
  case 6:
    printf("The day of the week is Saturday.\n");
    break;
  case 7:
    printf("The day of the week is Sunday.\n");
    break;
  }

  return 0;
}
