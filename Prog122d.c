#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent < 0)
        return 1 / power(base, -exponent);
    else if (exponent % 2 == 0) {
        float half_pow = power(base, exponent / 2);
        return half_pow * half_pow;
    }
    else
        return base * power(base, exponent - 1);
}

int main() {
    for (int i = -13; i < 16; i++) {
        int x = i + 1;
        int y = power(x, 6) - (3 * power(x, 5)) - (93 * power(x, 4)) + (87 * power(x, 3)) + (1596 * power(x, 2)) - (1380 * x) - 2800;
        printf("%d", y); 
        printf("\n");
    }
}