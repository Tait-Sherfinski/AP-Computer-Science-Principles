#include <stdio.h>

int main() {
    int weight;
    int length;
    int width;
    int height;

    printf("Enter package weight(kg): ");
    scanf("%d", & weight);
    printf("Enter package length(cm): ");
    scanf("%d", &length);
    printf("Enter package width(cm): ");
    scanf("%d", &width);
    printf("Enter package height(cm): ");
    scanf("%d", &height);

    int vol = length * width * height;
    if (vol > 100000 && weight > 27) printf("Too large and too heavy");
    else if (vol > 100000) printf("Too large");
    else if (weight > 27) printf("Too heavy");
    else printf("Valid package");
    printf("\n");
}