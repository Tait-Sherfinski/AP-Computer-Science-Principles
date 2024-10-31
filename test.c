#include <stdio.h>
#include <stdlib.h>

int main() {
    int min = 5;
    int max = 10;

    int randomNum = rand() % (max - min + 1) + min;
    printf("%d", randomNum);
}