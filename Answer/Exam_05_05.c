#include <stdio.h>
int main() {
    int c = 0, num, mass[1000];
    while (scanf("%d", &num) == 1 && num != -1) {
        mass[c] = num;
        c++;
    }
    for (int i = c - 1; i > -1; i--) {
        printf("%d", mass[i]);
        if (i != 0) {
            printf(" ");
        }
    }
    return 0;
}
