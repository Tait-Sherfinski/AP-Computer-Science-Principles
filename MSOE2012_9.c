#include <stdio.h>
#include <string.h>

int getVal(char x) {
    switch (x){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int convert(char *romanNumeral) {
    int total = 0;
    int len = strlen(romanNumeral);

    for (int i = 0; i < len; i++) {
        int currentNum = getVal(romanNumeral[i]);
        int nextNum = getVal(romanNumeral[i+1]);

        if (currentNum < nextNum) total -= currentNum;
        else total += currentNum;
    }
    return total;
}

int main() {
    char *rn;
    printf("Enter a roman numeral: ");
    scanf("%s", rn);
    int result = convert(rn);
    printf("%d", result);
}