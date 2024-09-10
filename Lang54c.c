#include <stdio.h>

int main() {
    float pi = 3.14159;
    float rad;

    printf("Enter radius: ");
    scanf("%f", &rad);

    float circ = 2 * pi * rad;
    float area = pi * (rad * rad);
    printf("The area of the circle is: %.2f", area);
    printf("\nThe circumference of the circle is %.2f", circ);
}