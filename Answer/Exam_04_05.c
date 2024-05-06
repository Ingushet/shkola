#include <stdio.h>
int main() {
    int num, res = 1, flag = 0;
    if (scanf("%d", &num) != 1) {
        printf("n/a");
    } else {
        if (num < 0) {
            num = -num;
        }
        while (num > 0) {
            int temp = num % 10;
            if (temp % 2 != 0) {
                res *= temp;
                flag = 1;
            }
            num /= 10;
        }
        if (flag) {
            printf("%d", res);
        } else {
            printf("0");
        }
    }
    return 0;
}
