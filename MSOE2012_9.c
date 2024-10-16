#include <stdio.h>
#include <string.h>

int main() {
    char rn;
    int total = 0;
    printf("Enter a roman numeral: ");
    scanf("%s", rn);
    switch (rn){
        case 'I': total += 1;
        case 'V': total += 5;
        case 'X': total += 10;
        case 'L': total += 50;
        case 'C': total += 100;
        case 'D': total += 500;
        case 'M': total += 1000;
    }
    printf("%d", total);
}