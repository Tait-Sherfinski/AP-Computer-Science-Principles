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
    fgets(sequence, sizeof(sequence), stdin);
    sequence[strcspn(sequence, "\n")] = '\0';

    printf("Enter a target sequence: ");
    fgets(target, sizeof(target), stdin);
    target[strcspn(target, "\n")] = '\0';

    if (strlen(target) == 0) {
        return 1;
    }

    int result = counter(sequence, target);

    printf("%d", result);
}