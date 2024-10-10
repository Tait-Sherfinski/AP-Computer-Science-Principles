#include <stdio.h>

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    while (n > 1) {
        if (n % 2 == 0) {
            printf("%d is even, so I take half: %d", n, n/2);
            printf("\n");
            n /= 2;
        }
        else {
            printf("%d is odd, so I make 3n+1: %d", n, (n*3)+1);
            printf("\n");
            n = (n * 3) + 1;
        }
    }
    printf("\n");
}