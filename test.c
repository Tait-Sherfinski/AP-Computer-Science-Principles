#include <stdio.h>

int main() {
  int x = 0;
  int matrix[3][3] = {{1, 3, 5}, {2, 4, 6}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      x += matrix[i][j];
    }
  }
printf("%d\n", x);
}