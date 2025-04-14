#include <stdio.h>

void convert(int Utime) {
    int m = 1;
    int d = 1;
    int y = 1970;
    int days = Utime / 86400;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        for (int i = 0; i < days; i++) {
            d++;
            if (d == 31) {
                d -= 30;
                m++;
                if (m == 12) {
                    y += 1;
                    m -= 11;
                }
            }
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        for (int i = 0; i < days; i++) {
            d++;
            if (d == 30) {
                d -= 29;
                m++;
            }
        }
    }
    else if (m == 2) {
        for (int i = 0; i < days; i++) {
            d++;
            if (d == 28) {
                d -= 27;
                m++;
            }
        }
    }
    printf("%d/%d/%d", m, d, y);
}

int main() {
    int Utime;
    printf("Enter UNIX Time: ");
    scanf("%d", &Utime);
    convert(Utime);
}