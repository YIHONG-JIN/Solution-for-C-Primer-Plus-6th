#include <math.h>
#include <stdio.h>
int main(void)
{
    const double ANSER = 3.14159;
    double response;

    printf("What is the new value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response-ANSER)>0.0001)
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}