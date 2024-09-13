#include <stdio.h>
#include <math.h>

int main() {
    int time1;
    int time2;
    int diff;

    printf("Enter first time: ");
    scanf("%d", &time1);
    printf("Enter second time: ");
    scanf("%d", &time2);

    if (time1 > time2) {
        diff = abs(time1 - 2460) + time2;
    } 
    else if (time2 > time1) {
        diff = time2 - time1;
    }
    printf("%d", diff);
    printf("\n");
}