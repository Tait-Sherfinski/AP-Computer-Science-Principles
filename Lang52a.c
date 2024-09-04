#include <stdio.h>

int main() {
    int length;
    int width;
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);
    int area = length * width;
    int perim = 2 * length + 2 * width;
    printf("The area is: %d", area);
    printf("\nThe perimeter is: %d", perim);

    return 0;
}