#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, m;
    if(scanf("%d %d", &n, &m) != 2 || n < 1 || m < 1){
        printf("n/a");
        return 0;
    }
    int **matrix = (int**)malloc(sizeof(int*) * n);
    int *ptr = (int*)malloc(sizeof(int)* n * m);
    for(int i = 0; i < n; i++){
        matrix[i] = ptr + i * m;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int temp = 0;
    for(int j = 0; j < m; j++){
        temp = matrix[0][j];
        matrix[0][j] = matrix[n-1][j];
        matrix[n-1][j] = temp;
    }

    for(int i = 0; i < n; i++){
        if(i != 0){printf("\n");}
        for(int j = 0; j < m; j++){
        printf("%d", matrix[i][j]);
        if(j != m - 1){printf(" ");}
    }}

    free(matrix);
    free(ptr);
    return 0;

}
