
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%100[^\n]s", str);

    int flag = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (flag) {
                str[i] = toupper(str[i]);
                flag = 0;
            }
        } else {
            flag = 1;
        }
    }

    printf("%s", str);

    return 0;
}
