#include <stdio.h>
#include <stdlib.h>
int main() {
    int c = 0, num, mass[1000];
    while(scanf("%d", &num) == 1 && num != -1){
        if(c != 0){
        if(num == mass[c - 1]){
        c++;}
        else{
         mass[c] = num;
         c++;
        }}
        else {
        mass[c] = num;
        c++;}
    }
    for(int i = 0; i < c; i++){
        printf("%d", mass[i]);
    }
    return 0;
}
