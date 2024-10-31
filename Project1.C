// Project Number 12: Grocery Shopping List

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    float price;
    int bought;
} Item;

Item groceryList[MAX_ITEMS];
int itemCount = 0;

void addItem(const char *name, float price) {
    if (itemCount < MAX_ITEMS) {
        strcpy(groceryList[itemCount].name, name);
        groceryList[itemCount].price = price;
        groceryList[itemCount].bought = 0;
        itemCount++;
        printf("%s has been added", name);
    } else printf("List is full");
}

void removeItem(const char *name) {
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(groceryList[i].name, name) == 0) {
            for (int j = i; j < itemCount - 1; j++) {
                groceryList[j] = groceryList[j + 1];
            }
            itemCount--;
            printf("%s has been removed", name);
            return;
        }
    } printf("Item not found");
}

void buyItem(const char *name) {
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(groceryList[i].name, name) == 0) {
            groceryList[i].bought = 1;
            groceryList[i].price = 0;
            printf("%s Bought", name);
            return;
        }
    } printf("Item not found");
}

float calculateCost() {
    float total = 0.0;
    for (int i = 0; i < itemCount; i++) {
        total += groceryList[i].price;
    } return total;
}

void showList() {
    printf("Grocery List: \n");
    for (int i = 0; i < itemCount; i++) {
        printf("%s - $%.2f %s\n", groceryList[i].name, groceryList[i].price, groceryList[i].bought ? "(Bought)" : "");
    } printf("Total cost of unbought items: $%.2f", calculateCost);
}

int main() {
    int choice;
    char name[50];
    float price;

    do {
        printf("\nGrocery List\n");
        printf("1. Add Item\n");
        printf("2. Remove Item\n");
        printf("3. Buy Item\n");
        printf("4. Show List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter item name: ");
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                printf("Enter item price: ");
                if (scanf("%f", &price) != 1) {
                    printf("Invalid price\n");
                    while (getchar() != '\n');
                    break;
                }
                addItem(name, price);
                break;
            case 2:
                printf("Enter item to remove: ");
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                removeItem(name);
                break;
            case 3:
                printf("Enter item to be bought: ");
                getchar();
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = 0;
                buyItem(name);
                break;
            case 4:
                showList();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice");
        }
    }
    while (choice != 5); return 0;
}