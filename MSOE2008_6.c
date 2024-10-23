#include <stdio.h>
#include <string.h>

int counter(char *seq, char *targetSeq) {
    int count = 0;
    char *pos = seq;

    while ((pos = strstr(pos, targetSeq)) != NULL) {
        count++;
        pos += strlen(targetSeq);
    }
    return count;
}

int main () {
    char sequence[1000];
    char target[1000];

    printf("Enter a DNA sequence: ");
    scanf("%s", sequence);
    printf("Enter a target sequence: ");
    scanf("%s", target);
    
    if (strlen(target) == 0) {
        return 1;
    }

    int result = counter(sequence, target);

    printf("%d\n", result);
}