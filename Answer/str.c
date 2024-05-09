#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str[101];
    int flag = 1;
    scanf("%100[^\n]s", str);
    int n = 0;
    while(str[n] != '\0'){n++;}
    n--;
    int i = 0;
    while(i < n){
        if(tolower(str[i]) != tolower(str[n])){
            flag = 0;
            break;
        }
    i++;
    n--;}
    if(flag){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;

}
