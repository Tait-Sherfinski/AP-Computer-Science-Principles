#include <stdio.h>
#include <string.h>

int main() {
    char rn;
    int MCount;
    int DCount;
    int CCount;
    int LCount;
    int XCount;
    int VCount;
    int ICount;
    printf("Enter a roman numeral: ");
    scanf("%c", &rn);

    while (rn == 'M') MCount++;
    while (rn == 'D') DCount++;
    while (rn == 'C') CCount++;
    while (rn == 'L') LCount++;
    while (rn == 'X') XCount++;
    while (rn == 'V') VCount++;
    while (rn == 'I') ICount++;

    printf("%d", MCount);
}