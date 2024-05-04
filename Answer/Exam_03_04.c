#include <stdio.h>
int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("n/a");
    } else {
        printf("%d", a < c && c < b);
    }
    return 0;
}
