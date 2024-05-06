#include <stdio.h>
#include <stdlib.h>
int main() {
    int c = 0, num, size = 2;
    ;
    int *data = malloc(sizeof(int) * size);
    while (scanf("%d", &num) == 1 && num != -1) {
        if (c + 1 == size) {
            size *= 2;
            int *data1 = malloc(sizeof(int) * size);
            for (int i = 0; i < c; i++) {
                data1[i] = data[i];
            }
            free(data);
            data = data1;
        }
        data[c] = num;
        c++;
    }

    int i = 0, j = c - 1;

    while (i < j) {
        printf("%d %d", data[i], data[j]);
        i++;
        j--;
        if (i < j) {
            printf(" ");
        }
        if (i == j) {
            printf(" %d", data[i]);
        }
    }
    free(data);
    return 0;
}
