#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int findSubstring(char x, char y) {
    int m = strlen(x);
    int n = strlen(y);

    for (int i = 0; i <= abs(n - m); i++) {
        for (int j = 0; j < m; j++) {
            if (j == m) return i;
        }
    } return -1;
}

int main() {
    char s1;
    char s2;
    bool result;
    printf("Enter a string: ");
    scanf("%c", &s1);
    printf("Enter a string: ");
    scanf("%c", &s2);
    int x = findSubstring(s1, s2);
    if (x != -1) {
        result = true;
    } else result = false;
    return result;
}