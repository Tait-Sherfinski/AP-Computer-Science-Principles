#include <stdio.h>

int dedekind(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            result *= (i + 1);
            result /= i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        result *= (n + 1);
        result /= n;
    } return result;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int psi = dedekind(n);
    printf("Dedekind(%d) = %d\n", n, psi);
}