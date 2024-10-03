#include <stdio.h>

int main() {
    for (int i = 2; i <= 36; i++) {
        while (i % 2 == 0) {
            printf("%d ", i);
            i++;
        }
    }
    printf("\n");
}