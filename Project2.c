// To-Do List App

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ITEMS 100

typedef struct {
    char name[50];
    int complete;
} Task;

Task list[MAX_ITEMS];
int taskCount = 0;

void addTask(const char *name) {
    if (taskCount < MAX_ITEMS) {
        strcpy(list[taskCount].name, name);
        list[taskCount].complete = 0;
        taskCount++;
        printf("%s has been added to task list", name);
    } else printf("Task list is full");
}

void removeTask(const char *name) {
    for (int i = 0; i < taskCount; i++) {
        if (strcmp(list[i].name, name) == 0) {
            for (int j = i; j < taskCount; j++) {
                list[j] = list[j+1];
            } taskCount--;
            printf("%s has been removed from task list", name);
            return;
        }
    } printf("Task not found");
}

void markTaskComplete(const char *name) {
    for (int i = 0; i < taskCount; i++) {
        if (strcmp(list[i].name, name) == 0) {
            list[i].complete = 1;
            printf("%s is complete\n");
            return;
        } 
    } printf("Task not found");
}

void showList() {
    printf("Task List: ");
    for (int i = 0; i < taskCount; i++) {
        printf("%s\n", list[i].name, list[i].complete = 1 ? "(Completed)" : "");
    }
}

int main() {
    int choice;
    char name[50];

    do {
        printf("\nTask List\n1. Add Task\n2. Remove Task\n3. Mark Task as Complete\n4. View Task List\n5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter name of task: ");
                scanf("%s", &name);
                addTask(name);
                break;
            case 2:
                printf("Enter name of task to be remove: ");
                scanf("%s", &name);
                removeTask(name);
                break;
            case 3:
                printf("Enter completed task: ");
                scanf("%s", &name);
                markTaskComplete(name);
                break;
            case 4:
                showList();
                break;
            case 5:
                printf("Exited\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    while (choice != 5);
    return 0;
}