#include <stdio.h>
int main(void)
{
    float x, y;
    printf("Please enter the two float data(seprate by blank): ");
    while (scanf("%f %f", &x, &y) == 2)
    {
        printf("The answer is %f\n", (x-y)/(x*y));
        printf("Please enter the two float data(separate by blank): ");
    }
    printf("Program end!");
    return 0;
}