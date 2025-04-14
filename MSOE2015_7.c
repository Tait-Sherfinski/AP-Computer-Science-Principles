#include <stdio.h>

int triangular(int n) {
    return n * (n + 1) / 2;
}

int makeTriangular(int n, int arr[]) {
    int count = 0;
    int t = 0;
    while (triangular(t) <= n) {
        arr[count++] = triangular(t);
        t++;
    } return count;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int arr[100];
    int tri_num = makeTriangular(num, arr);
    for (int i = 0; i < tri_num; i++) {
        for (int j = 0; j < tri_num; j++) {
            for (int k = 0; k < tri_num; k++) {
                if (arr[i] + arr[j] + arr[k] == num) {
                    printf("Partitioned: %d, %d, %d\n", arr[i], arr[j], arr[k]);
                    return 0;
                }
            }
        }
    } printf("No valid partitions");
}