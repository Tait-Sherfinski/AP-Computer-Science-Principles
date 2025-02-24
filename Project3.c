// Simple Contact Manager

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    char email[50];
    char phone_num[50];
} Item;

Item contactList[MAX_ITEMS];
int itemCount = 0;

void addContact(const char *name, char *email, char *phone_num) {
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
    char name[50];
    char email[50];
    char phone_num[50];

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
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                printf("Enter Contact Email: ");
                getchar();
                fgets(email, sizeof(email), stdin);
                name[strcspn(email, "\n")] = 0;
                printf("Enter Contact Phone Number: ")
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                    break;
                
                addItem(name, price);
                break;
            case 2:
                printf("Enter name of contact: ");
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
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