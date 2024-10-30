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
    } else printf("List is full");
}

void removeItem(const char *name) {
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(groceryList[i].name, name) == 0) {
            for (int j = i; j < itemCount - 1; j++) {
                groceryList[j] = groceryList[j + 1];
            }
            itemCount--;
            return;
        }
    } printf("Item not found");
}

void buyItem(const char *name) {
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(groceryList[i].name, name) == 0) {
            groceryList[i].bought = 1;
            printf("%s Bought", name);
            return;
        }
    } printf("Item not found");
}

float calculateCost() {
    float total = 0.0;
    for (int i = 0; i < itemCount; i++) {
        if (!groceryList[i].bought) {
            total += groceryList[i].price;
        }
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
        printf("1. Add Item");
        printf("2. Remove Item");
        printf("3. Buy Item");
        printf("4. Show List");
        printf("5. Exit");
        printf("Enter your choice: ");
        scanf("%d", choice);

        switch (choice) {
            case 1:
                printf("Enter item name: ");
                scanf(" %[^\n]", name);
                printf("Enter item price: ");
                scanf("%f", price);
                addItem(name, price);
                break;
            case 2:
                printf("Enter item to remove: ");
                scanf("%[^\n]", name);
                removeItem(name);
                break;
            case 3:
                printf("Enter item to be bought: ");
                scanf("%[^\n]", name);
                buyItem(name);
                break;
            case 4:
                showList();
                break;
            case 5:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice");
        }
    } while (choice != 5);
    return 0;
}