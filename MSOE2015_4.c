#include <stdio.h>

void sort(float arr[], int size) {
    float temp;
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[j] > arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    float nums[10];
    float temp[10];
    int count = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%f", &nums[i]);
        count++;

        if (count >= 3) {
            for (int j = 0; j < count; j++) {
                temp[j] = nums[j];
            }
            sort(temp, count);
            printf("Third Largest: %.2f\n", temp[2]);
        }
    }
}