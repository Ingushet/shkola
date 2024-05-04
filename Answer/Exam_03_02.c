#include <math.h>
#include <stdio.h>
int main() {
    double rad, grad;
    if (scanf("%lf", &rad) != 1) {
        printf("n/a");
    } else {
        grad = (double)round(57.29 * rad);
        printf("%.0lf", grad);
    }
    return 0;
}
