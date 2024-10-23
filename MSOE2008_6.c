#include <stdio.h>
#include <string.h>

int main () {
    char sequence;
    char target;

    printf("Enter a DNA sequence: ");
    scanf("%s", sequence);
    printf("Enter a target sequence: ");
    scanf("%s", target);

    int count = 0;
    char inSequence = strstr(sequence, target);

    printf("%s", inSequence);
}