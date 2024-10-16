#include <stdio.h>
#include <string.h>

int main() {
    const char s1[100];
    const char s2[50];
    printf("Enter a string: ");
    scanf("%s", &s1);
    printf("Enter a string: ");
    scanf("%s", &s2);
    char *result = strstr(s1, s2);

    if (result != NULL) printf("The first string contains the second string\n");
    else printf("The first string does not contain the second string\n");
}