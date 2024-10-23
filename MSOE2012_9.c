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
    int current;
    int next;
    int len = strlen(romanNumeral);

    for (int i = 0; i < len; i++) {
        current = getVal(romanNumeral[i]);
        if (i + 1 < len) next = getVal(romanNumeral[i + 1]);
        else next = 0;

        if (current < next) total -= current;
        else total += current;
    }
    return total;
}

int main() {
    char roman[100];
    printf("Enter a roman numeral: ");
    scanf("%s", roman);
    int result = convert(roman);
    printf("%d\n", result);

    return 0;
}