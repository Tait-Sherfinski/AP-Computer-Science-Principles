#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    gets(str);
    
    printf("%s", str);
    printf("\n");
}