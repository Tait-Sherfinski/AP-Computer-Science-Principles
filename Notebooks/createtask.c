// length unit converter

#include <stdio.h>
#include <string.h>

int Convert(char *type1, char *type2) {
    if (strcmp(type1, "mm") == 0) {

    }
}

int main() {
    char *inittype;
    char *converttype;
    int num;
    printf("Which unit are you using: km/m/cm/mm/mile/foot/yard? ");
    scanf("%s", &inittype);
    printf("How many units: ");
    scanf("%d", &num);
    printf("Which unit would you like to convert to: km/m/cm/mm/mile/foot/yard? ");
    scanf("%s", &converttype);
    lengthConvert(inittype, converttype);
}