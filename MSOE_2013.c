#include <stdio.h>

int main() {
    float r1;
    float r2;
    float r3;
    float vs;

    printf("Enter resistance 1: ");
    scanf("%f", &r1);
    printf("Enter resistance 2: ");
    scanf("%f", &r2);
    printf("Enter resistance 3: ");
    scanf("%f", &r3);
    printf("Enter voltage: ");
    scanf("%f", &vs);

    float A = (vs / r1) + (vs / r2) + (vs / r3);
    float R = vs / A;

    printf("%.2f", R);
    printf("\n");
}