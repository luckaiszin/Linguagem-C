#include <stdio.h>
#include <stdlib.h>
#define eps 0.000000000000000000000000000000000000000000000000000000000001

int main()
{

    double x;
    scanf("%lf", &x);

    double f0 = x;
    double f =( 0.5 * (f0 + x / f0));

    while (f - f0 >= eps)
    {

        f0 = f;

        f = 1/2 * (f0 + x / f0);
    }

    printf("sqrt %f = %.16f\n", x, f);

    return 0;
}