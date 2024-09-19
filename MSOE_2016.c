#include <stdio.h>

int main() {
    int n;
    int count;

    printf("Enter an int between 1 and 10000: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) count++;
    }
    printf("The number is: %d", count);
}