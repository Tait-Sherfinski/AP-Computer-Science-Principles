#include <stdio.h>

void bitwise_opertaions(int a, int b) {
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 2 = %d\n", a << 2);
    printf("b >> 2 = %d\n", b >> 2);
}

void bitwise_masks(unsigned char x) {
    unsigned char cleared_x = x & ~(1 << 3);
    printf("Clearing the 3rd bit of x: 0b11000010: %d\n", cleared_x);
    unsigned char set_x = x | (1 << 2);
    printf("Setting the 2nd bit of x: 0b11000010: %d\n", set_x);
    unsigned char toggled_x = x ^ (1 << 6);
    printf("Toggling the 6th bit of x: 0b11000010: %d\n", toggled_x);
    unsigned char extracted = (x >> 2) & 0b111;
    printf("Extracting bits 2 to 4 from x: 0b001: %d\n", extracted);
}

void complex_bitwise_operation(int m, int n, int y) {
    int packed = (n << 8) | m;
    printf("Packing m and n: %d\n", packed);
    int unpacked_m = packed & 0xFF;
    int unpacked_n = (packed >> 8) & 0xFF;
    printf("Unpacking should give back %d and %d\n", unpacked_m, unpacked_n);

    int bit1 = (y >> 0) & 1;
    int bit4 = (y >> 3) & 1;
    if (bit1 != bit4) {
        y ^= (1 << 0);
        y ^= (1 << 3);
    } 
    printf("Swapping the 1st and 4th bits of y = 75 should result in %d\n", y);
}

int main() {
    int a = 29;
    int b = 15;
    int m = 5;
    int n = 9;
    int y = 75;
    unsigned char x = 0b11001010;
    bitwise_opertaions(a, b);
    bitwise_masks(x);
    complex_bitwise_operation(m, n, y);
}