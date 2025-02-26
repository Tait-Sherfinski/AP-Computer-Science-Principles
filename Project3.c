// Simple Contact Manager

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 100

typedef struct {
    char *name;
    char *email;
    char *phone_num;
} Item;

Item contactList[MAX_ITEMS];
int itemCount = 0;

void addContact(char *name, char *email, char *phone_num) {
    if (itemCount < MAX_ITEMS) {
        strcpy(contactList[itemCount].name, name);
        contactList[itemCount].email = email;
        contactList[itemCount].phone_num = phone_num;
        itemCount++;
        printf("%s has been added to contact list", name);
    } else printf("List is full");
}

void findContact(char *contact_name) {
    for (int i = 0; i < itemCount; i++) {
        if (strstr(contact_name, contactList[i].name)) {
            printf("%s %s %s", contactList[i].name, contactList[i].email, contactList[i].phone_num);
        }
    }
}

int main() {
    int choice;
    char *name;
    char *email;
    char *phone_num;

    do {
        printf("\nContact List\n");
        printf("1. Add Contact\n");
        printf("2. Search for Contact\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Contact Name: ");
                scanf("%s", &name);
                printf("Enter Contact Email: ");
                scanf("%s", &email);
                printf("Enter Contact Phone Number: ");
                scanf("%s", &phone_num);
                addContact(name, email, phone_num);
                break;
            case 2:
                printf("Enter name of contact: ");
                scanf("%s", &name);
                findContact(name);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice");
        }
    }
    while (choice != 3); return 0;
}