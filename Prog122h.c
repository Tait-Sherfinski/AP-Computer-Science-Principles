#include <stdio.h>
#include <math.h>

int power(int base, int exponent) {
    return base * power(base, exponent - 1);
}

int main() {
    int sq;
    float sqroot;
    int cube;
    float fthroot;

    printf("Number | Square | Square Root | Cube | 4th Root");
    
    for (int i = 1; i <= 20; i++) {
        sq = i * i;
        sqroot = power(i, 1);
        cube = i * i * i;
        //fthroot = squareroot(sqroot);
        printf("\n%d " , i);
        printf("\t%d ", sq);
        printf("\t%.2f ", sqroot);
    }
}