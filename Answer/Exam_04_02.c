#include <stdio.h>
int main() {
    int c = 0, num, mass[1000], max = 0;
    while (scanf("%d", &num) == 1 && num != -1) {
        mass[c] = num;
        c++;
    }
    for (int i = 0; i < c; i++) {
        if (mass[i] > max) {
            max = mass[i];
        }
    }
    printf("%d", max);
    return 0;
}
