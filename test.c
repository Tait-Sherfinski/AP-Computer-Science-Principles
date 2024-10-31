#include <stdio.h>

int someFunction(int num) {
  return num * 5;
}

int main() {
  int x;

  printf("Enter a number: ");
  scanf("%d", &x);

  int y = someFunction(x);
  printf("%d", y);
}