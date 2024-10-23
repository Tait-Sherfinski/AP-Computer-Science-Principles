#include <stdio.h>
#include <stdlib.h>

int main() {
    // make an array
    int arr[] = {1, 3, 6, 9, 13, 16, 20, 27, 29, 34, 38, 40, 41, 42, 44, 53, 57, 72, 81};
    int len = sizeof(arr) / sizeof(arr[0]);
    // print the array
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    // middle number of the array
    int index = len / 2;
    int mid = arr[index];
    printf("\n%d\n", mid);
}
