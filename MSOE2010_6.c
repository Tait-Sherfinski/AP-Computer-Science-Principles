#include <stdio.h>

float func(int n, float x[], float y[]) {
    float A = 0.0;
    for (int i = 0; i < n-1; i++) {
        A = 1/2 * (x[i] * y[i+1]) - (x[i+1] * y[i]);
    } printf("%f", A);
}

int main() {
    int n;
    float temp;
    float temp2;
    float x[n];
    float y[n];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("X coordinate of vertex %d: ", i+1);
        scanf("%f", &temp);
        x[i] = temp;
        printf("Y coordinate of vertex %d: ", i+1);
        scanf("%f", &temp2);
        y[i] = temp2;
    }
    func(n, x, y);
}