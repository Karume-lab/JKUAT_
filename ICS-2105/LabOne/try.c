#include <stdio.h>

#define MAX_LEN 100

int main() {
  char str[MAX_LEN];

  printf("Enter a string: ");
  scanf("%[^\n]", str);

  printf("The string you entered is: %s\n", str);

  return 0;
}