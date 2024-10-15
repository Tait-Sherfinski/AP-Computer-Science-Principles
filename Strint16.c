#include <stdio.h>
#include <string.h>

int main() {
    const char s1[100];
    const char s2[50];
    printf("Enter a string: ");
    scanf("%s", &s1);
    printf("Enter a string: ");
    scanf("%s", &s2);
    char *something = strstr(s1, s2);

    if (something != NULL) printf("The first string contains the second string\n");
    else printf("The second string does not contain the first string\n");
}