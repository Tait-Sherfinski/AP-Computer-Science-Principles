#include <stdio.h>
#include <math.h>

int main() {
    int num1;
    int num2;
    
    printf("Enter number: ");
    scanf("%d", &num1);
    printf("Enter number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    int avg = sum / 2;
    int max;
    if (num1 > num2) max = num1;
    else max = num2;
    int min;
    if (max == num1) min = num2;
    else min = num1;
    int absval = max - min;
    printf("Sum: %d", sum);
    printf("\nDifference: %d", diff);
    printf("\nProduct: %d", prod);
    printf("\nAverage: %d", avg);
    printf("\nAbsolute Value: %d", absval);
    printf("\nMaximum: %d", max);
    printf("\nMinimum: %d", min);
    printf("\n");
}