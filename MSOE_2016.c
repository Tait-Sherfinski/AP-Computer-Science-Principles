#include <stdio.h>

int main() {
    int n;
    int count;

    printf("Enter an int between 1 and 10000: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) count++;
    }

    printf("%d", count);
    printf("\n");
}