#include <stdio.h>
#include <stdlib.h>
int main() {
    int c = 0, num, mass = 2, tmax, tmin, temp;
    int *data = malloc(sizeof(int) * mass);
    while (scanf("%d", &num) == 1 && num != -1) {
        if (c == mass - 1) {
            mass *= 2;
            int *data2 = malloc(sizeof(int) * mass);
            for (int i = 0; i < c; i++) {
                data2[i] = data[i];
                free(data);
                data = data2;
            }
        }
        data[c] = num;
        c++;
    }
    tmax = tmin = 0;
    for (int i = 0; i < c; i++) {
        if (data[i] < data[tmin]) {
            tmin = i;
        }
        if (data[i] > data[tmax]) {
            tmax = i;
        }
    }
    temp = data[tmin];
    data[tmin] = data[tmax];
    data[tmax] = temp;

    for (int i = 0; i < c; i++) {
        printf("%d", data[i]);
        if (i != c - 1) {
            printf(" ");
        }
    }
    free(data);
    return 0;
}
