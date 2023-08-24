#include <stdio.h>

int main() {
  char firstName[50];
  char lastName[50];

  printf("Enter your first name: ");
  scanf("%s", firstName);

  printf("Enter your last name: ");
  scanf("%s", lastName);

  printf("First Name: %s\n", firstName);
  printf("Last Name: %s\n", lastName);

  return 0;
}
