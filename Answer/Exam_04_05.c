#include <stdio.h>
int number(int num);
int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("n/a");
    }

    else {
        printf("%d", number(num));
    }
    return 0;
}

int number(int num) {
    int res = 1;
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        int temp = num % 10;
        if (temp % 2 != 0) {
            res *= temp;
        }
        num /= 10;
        if (res == 1 && temp % 2 == 0) {
            return 0;
        }
    }
    return res;
}
