#include <stdio.h>
#include <stdlib.h>
int main() {
    int num, n, m;
    if(scanf("%d %d", &n, &m) !=2 || n < 1 || m < 1) {
        printf("n/a");
        return 1;
    }
    int **matrix = malloc(sizeof(int*) * n);
    int *point = malloc(sizeof(int) * n * m);
    for(int i = 0; i < n; i++){
        matrix[i] = point + i * m;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &num);
            matrix[i][j] = num;
        }
    }

    int *max = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        max[i] = matrix[i][0];
        for(int j = 0; j < m; j++)
        if(max[i] < matrix[i][j]){
            max[i] = matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d", max[i]);
        if(i != n - 1){
            printf(" ");
        }
    }
    free(max);
        free(point);
        free(matrix);
        return 0;
}
