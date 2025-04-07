#include <stdio.h>

int main() {
    int n;
    int T;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int i = 0;
    while (i <= 6) {
        T = (i * (i+1)) / 2;
        if (n % T != 0) i++;
        else if (n % T == 0) {
            int one = T;
            i++
        }
    }

}