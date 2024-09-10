#include <stdio.h>

int main() {
    float num1;
    float num2;
    float num3;
    float num4;
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);
    printf("Enter num3: ");
    scanf("%f", &num3);
    printf("Enter num4: ");
    scanf("%f", &num4);
    float sum = num1 + num2 + num3 + num4;
    float avg = sum / 4;
    printf("The sum of all four numbers is: %.1f", sum);
    printf("\nThe average of all four numbers is: %.2f", avg);

    return 0;
}