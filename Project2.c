// To-Do List App

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    int complete;
} Task;

Task list[MAX_ITEMS]
int taskCount = 0;

void addTask(const char *name) {
    if (itemCount < MAX_ITEMS) {
        strcpy(list[itemCount].name, name);
        list[itemCount].complete = 0;
        itemCount++;
        printf("%s has been added to task list", name);
    } else printf("Task list is full");
}

void removeTask(const char *name) {
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(list[i].name, name) == 0) {
            for (int j = i; j < itemCount; j++) {
                list[j] = list[j+1];
            } itemCount--;
            printf("%s has been removed from task list", name);
            return
        }
    } printf("Task not found");
}

void markTaskComplete(const char *name) {
    for (int i = 0; i < itemCount; i++) {
        if (strcmp(list[i].name, name) == 0) {
            list[i].complete = 1;
            printf("%s is complete");
            return
        } 
    } printf("Task not found")
}

void showList() {
    printf("Task List: ");
    for (int i = 0; i < itemCount; i++) {
        printf(list[i].name, list[i].complete ? "(Complete)" : "")
    }
}

int main() {
    int choice;
    char name[50];

    do {
        printf("\nTask List\n");
        printf("1. Add Task\n");
        printf("2. Remove Task\n");
        printf("3. Mark Task as Complete\n");
        printf("4. Show Task List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                
        }
    }
}