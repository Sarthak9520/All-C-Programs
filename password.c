#include <stdio.h>
#include <string.h>

int main() {
  char password[20];
  const char correctPassword[] = "secret";

  printf("Enter the password: ");
  scanf("%s", password);

  if (strcmp(password, correctPassword) == 0) {
    printf("Access granted. Welcome!\n");
  } else {
    printf("Access denied. Incorrect password.\n");
  }

  return 0;
}
