#include <stdio.h>

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else n = (n * 3) + 1;
    }
    printf("\n");
}