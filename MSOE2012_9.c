#include <stdio.h>
#include <string.h>

int rVal(char x) {
    switch (x){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default case: return 0;
    }
}

int main() {
    char rn;
    int total = 0;
    printf("Enter a roman numeral: ");
    scanf("%s", rn);
    for (int i = 0; i < strlen(rn); i++) {
        
    }
    printf("%d", total);
}