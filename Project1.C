#include <stdio.h>
#include <string.h>
#include <ctype.h>

void addItem(char *item) {
    char *arr[100];
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (strcmp(arr[i], item) != 0) arr[i] = item;
        else break;
    }
}

int main() {
    char option[10];
    char arr[100];
    char *r = "REMOVE";
    char *a = "ADD";
    char item[100];
    printf("Would you like to add or remove an item: ");
    scanf("%c", option);
    for (int i = 0; i < option[i] != '\0'; i++) {
        option[i] = toupper(option[i]);
    }
    if (strcmp(option, r) == 0) printf("There are no items to remove\n");
    else if (strcmp(option, a) == 0) {
        printf("What would you like to add? ");
        scanf("%c", item);
        addItem(item);
    }
    else printf("Invalid option");
}