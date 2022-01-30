#include <stdio.h>

#define M_PI 3.141592653589

int main(void)
{
    double r;
    double a,b;

    scanf("%lf", &r);

    a = r * r * M_PI;
    b = 2 * r * M_PI;

    printf("%f %f\n", a, b);
    return 0;
}
