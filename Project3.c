// Simple Contact Manager

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 100
#define MAX_LENGTH 100

typedef struct {
    char *name;
    char *email;
    char *phone_num;
} Item;

Item contactList[MAX_ITEMS];
int itemCount = 0;

void addContact(char *name, char *email, char *phone_num) {
    if (itemCount < MAX_ITEMS) {
        contactList[itemCount].name = malloc(strlen(name)+1);
        contactList[itemCount].email = malloc(strlen(email)+1);
        contactList[itemCount].phone_num = malloc(strlen(phone_num)+1);
        if (!contactList[itemCount].name) {
            printf("Memory allocation failed\n");
            return;
        }
        strcpy(contactList[itemCount].name, name);
        strcpy(contactList[itemCount].email, email);
        strcpy(contactList[itemCount].phone_num, phone_num);
        itemCount++;
        printf("Contact has been added\n");
    } else printf("List is full");
}

void findContact(char *contact_name) {
    int found = 0;
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(contact_name, contactList[i].name) == 0) {
            printf("%s %s %s", contactList[i].name, contactList[i].email, contactList[i].phone_num);
            found = 1;
            break;
        }
    }
    if (!found) printf("Contact not found\n");
}

int main() {
    int choice;
    char name[MAX_LENGTH], email[MAX_LENGTH], phone_num[MAX_LENGTH];

    do {
        printf("\nContact List\n");
        printf("1. Add Contact\n");
        printf("2. Search for Contact\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        while (getchar() != '\n');

        switch (choice) {
            case 1:
                printf("Enter Contact Name: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';
                printf("Enter Contact Email: ");
                fgets(email, sizeof(email), stdin);
                name[strcspn(email, "\n")] = '\0';
                printf("Enter Contact Phone Number: ");
                fgets(phone_num, sizeof(phone_num), stdin);
                addContact(name, email, phone_num);
                break;
            case 2:
                printf("Enter name of contact: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0';
                findContact(name);
                break;
            case 3:
                printf("Exiting...\n");
                for (int i = 0; i < itemCount; i++) {
                    free(contactList[i].name);
                    free(contactList[i].email);
                    free(contactList[i].phone_num);
                }
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 3); 
    return 0;
}