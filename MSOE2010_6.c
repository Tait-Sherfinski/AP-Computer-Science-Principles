#include <stdio.h>

float func(int n, int x[], int y[]) {
    float A = 0.0;
    for (int i = 0; i < n-1; i++) {
        A += x[i]*y[i+1] - y[i]*x[i+1];
    } return A;
}

int main() {
    int n;
    int x[n];
    int y[n];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    func(n, x, y);
}