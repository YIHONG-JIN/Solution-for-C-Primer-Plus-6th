#include <stdio.h>

double harmean(double x, double y);

int main(void)
{
    double d1, d2;

    printf("Enter tow float number:");
    scanf("%lf %lf", &d1, &d2);
    printf("The HarMEAN of %g and %g is %g.", d1, d2, harmean(d1, d2));

    return 0;
}

double harmean(double x, double y)
{
    return 2/(1/x + 1/y);
}
