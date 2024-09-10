#include <stdio.h>
#include <math.h>

int main() {
    float saved;
    float intrate;
    float compound;
    float days;

    printf("Amount saved: ");
    scanf("%f", &saved);
    printf("Interest saved: ");
    scanf("%f", &intrate);
    printf("Number of times compunded per year: ");
    scanf("%f", &compound);
    printf("Number of days at interest: ");
    scanf("%f", &days);

    float intearned = saved * (1 + ((0.1 * intrate) / compound) ^ ((compound*days) / 365));
    printf("The interest earned is: %.2f", intearned);
}