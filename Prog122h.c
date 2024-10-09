#include <stdio.h>
#include <math.h>

double findSQRT(int number) {
    int start = 0, end = number;
    int mid;
    float ans;
    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        if (mid * mid < number) {
            ans=start;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}

int main() {
    int sq;
    float sqroot;
    int cube;
    float fthroot;

    printf("Number | Square | Square Root | Cube | 4th Root");
    
    for (int i = 1; i <= 20; i++) {
        sq = i * i;
        sqroot = findSQRT(i);
        cube = i * i * i;
        fthroot = findSQRT(sqroot);
        printf("\n%d" , i);
        printf("\t%d", sq);
        printf("\t%.2f ", sqroot);
        printf("\t\t%d", cube);
        printf("\t%.4f", fthroot);
    }
}