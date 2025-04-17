#include <stdio.h>

int main() {
    int water;
    int cups[100];

    printf("Enter OZs of water remaining: ");
    scanf("%d", &water);
    printf("Cups of coffee(4, 6, or 8 oz): ");
    for (int i = 0; i < 100; i++) {
        scanf("%d", &cups[i]);
        break;
    }
    for (int i = 0; i < 100; i++) {
        water -= (cups[i] + 1);
        if (water < 10) {
            break;
            printf("%d", i);
        }
    } 
}