#include <stdio.h>

int main() {
    int water;
    int cups[5];

    printf("Enter OZs of water remaining: ");
    scanf("%d", &water);
    printf("Cups of coffee(4, 6, or 8 oz): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &cups[i]);
    }
    for (int i = 0; i < 5; i++) {
        water -= cups[i] + 1;
        if (water < (cups[i] +1)) {
            printf("%d cups filled", i + 1);
            return 0;
        }
    }
}