#include <stdio.h>

int main() {
    int num, mass[1000], c = 0;

    while (scanf("%d", &num) == 1 && num != -1) {
        mass[c] = num;
        c++;
    }

    for (int i = 0; i < c; i++) {
        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (mass[j] == mass[i]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            if (i != 0) {
                printf(" ");
            }
            printf("%d", mass[i]);
        }
    }

    return 0;
}
