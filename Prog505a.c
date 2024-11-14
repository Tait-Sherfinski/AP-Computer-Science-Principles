#include <stdio.h>

int main () {
    //printf("Name\tBooks read\tPoints\n");
    FILE *file;
    file = fopen("Prog505a.txt", "r");
    char str[100];

    while (fgets(str, sizeof(str), file)) {
        printf("%s", str);
    }
}