#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 1) printf("n/a");
    int **data1, **data2, **data;
    data1 = (int **)malloc(sizeof(int *) * n);
    data2 = (int **)malloc(sizeof(int *) * n);
    data = (int **)calloc(sizeof(int *), n);

    for (int i = 0; i < n; ++i) {
        data1[i] = malloc(sizeof(int) * n);
        data2[i] = malloc(sizeof(int) * n);
        data[i] = calloc(sizeof(int), n);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &data1[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &data2[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                data[i][j] += data1[i][k] * data2[k][j];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0) printf("\n");
        for (int j = 0; j < n; ++j) {
            if (j != 0) printf(" ");
            printf("%d", data[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        free(data1[i]);
        free(data2[i]);
        free(data[i]);
    }
    free(data1);
    free(data2);
    free(data);

    return 0;
}
