#include <stdio.h>
#include <math.h>

int main() {
    float p;
    float r;
    float n;
    float t;

    printf("Amount saved: ");
    scanf("%f", &p);
    printf("Interest saved: ");
    scanf("%f", &r);
    printf("Number of times compunded per year: ");
    scanf("%f", &n);
    printf("Number of days at interest: ");
    scanf("%f", &t);

    float A = p * (1 + (0.01 * r)/(n));
    printf("%.2f", A);
}