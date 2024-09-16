#include <stdio.h>

int main() {
    int copies;
    float price;
    
    printf("Enter the number of properties to be printed: ");
    scanf("%d", &copies);

    if (copies <= 99) price = 0.3;
    else if (copies > 99 && copies <= 499) price = 0.28;
    else if (copies > 499 && copies <= 749) price = 0.27;
    else if (copies > 749 && copies <= 1000) price = 0.26;
    else price = 0.25;

    if (copies > 0) {
        float total = copies * price;
        printf("Price per copy is: %.2f", price);
        printf("\nThe total cost is: %.2f", total);
        printf("\n");
    } 
    else {
        printf("Please enter a valid number");
        printf("\n");
    }
}