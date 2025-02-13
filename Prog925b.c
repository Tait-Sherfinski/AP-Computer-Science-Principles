#include <stdio.h>

void opertaions(int a, int b) {
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 2 = %d\n", a << 2);
    printf("b >> 2 = %d\n", b >> 2);
}

void masks(char x) {
    char cleared_x = x & ~(1 << 3);
    char set_x = 
}

int main() {
    int a = 29;
    int b = 15;
    char x = "0b11001010"
}