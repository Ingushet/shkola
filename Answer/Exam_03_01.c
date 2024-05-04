#include <stdio.h>
#include <math.h>
int main (void)
{
    double result, V, R, P = 21500;
    if (scanf("%lf", &R) != 1 || R <= 0 ){
        printf("n/a");
    }
    else {
    V =(4.0/3.0) * pow(R, 3) * M_PI;
    double m = P * V;
    result = round (m);
	printf("%.0lf", result);}
	return 0;
}
