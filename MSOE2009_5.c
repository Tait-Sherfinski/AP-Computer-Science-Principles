#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0) {
        return true;
    } return false;
}

int main() {
    int num;
    printf("Enter a non-negative number: ");
    scanf("%d", &num);
    bool result = isPrime(num);
    if (result == true) printf("The number is prime\n");
    else printf("The number is not prime\n");
}