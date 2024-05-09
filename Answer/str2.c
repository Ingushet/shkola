#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char str1[101], str2[101];
    scanf("%100[^\n]s", str1);
    int i = 0, j = 0;
    while(str1[i] != '\0'){
        if(str1[i] != ' '){
            str2[j] = str1[i];
            j++;
        }
        else if(i != 0 && str1[i-1] != ' '){
            str2[j] = ' ';
            ++j;}
            i++;
        }
        printf("%s", str2);
        return 0;
    }
