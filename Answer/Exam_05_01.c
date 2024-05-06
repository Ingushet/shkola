#include <stdio.h>
void input(int *a, int n);
int main() {
    int num, a[1000], b[1000];
    if (scanf("%d", &num) != 1 || num < 1) {
        printf("n/a");
    } else {
        input(a, num);
        input(b, num);
        int sum = 0;
        for (int i = 0; i < num; i++) {
            sum += a[i] * b[i];
        }
        printf("%d", sum);
    }
    return 0;
}

void input(int *a, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", (a + i));
    }
}
