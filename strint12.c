#include <stdio.h>
#include <string.h>

int main() {
    char sent[100];
    printf("Enter a sentence: ");
    gets(sent);
    
    printf("%s", sent);
    printf("\n");
}