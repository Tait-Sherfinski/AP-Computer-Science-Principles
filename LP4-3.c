#include <stdio.h>

int main() {
    float eggs;
    float price;

    printf("Enter the number of eggs purchased: ");
    scanf("%f", &eggs);

    if (eggs < 48) price = 0.5;
    else if (eggs >= 48 && eggs < 72) price = 0.45;
    else if (eggs >= 72 && eggs < 132) price = 0.4;
    else if (eggs >= 132) price = 0.35;

    if (eggs > 0) {
        float dozens = eggs / 12;
        float total = dozens * price;
        printf("The bill is equal to: $%.2f", total);
        printf("\n");
    } else {
        printf("Please enter a valid number of eggs");
        printf("\n");
    }
}