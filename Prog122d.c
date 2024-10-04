#include <stdio.h>
#include <math.h>

int main() {
    for (int i = -13; i < 16; i++) {
        int x = i + 1;
        float y = 1.11; // pow(x, 6) - (3 * pow(x, 5)) - (93 * pow(x, 4)) + (87 * pow(x, 3)) + (1596 * pow(x, 2)) - (1380 * x) - 2800;
        printf("%.2f", y); 
    }
}