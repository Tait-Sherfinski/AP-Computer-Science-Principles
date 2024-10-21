#include <stdio.h>
#include <string.h>

int main () {
    char sequence;
    char target;
    int count;
    printf("Enter a DNA sequence: ");
    scanf("%s", sequence);
    printf("Enter target sequence: ");
    scanf("%s", target);
    char thing = strstr(sequence, target);

    if (thing == NULL) printf("The target sequence appears 0 times");
    else printf("Something");
}