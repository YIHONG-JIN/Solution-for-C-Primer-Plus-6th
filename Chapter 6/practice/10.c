#include <stdio.h>
int main(void)
{
    int lower, upper;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    while (upper > lower)
    {
        int sum = 0;
        for (int i = lower; i <= upper; i++)
            sum = sum + i*i;
    printf("The sum of the squares form %d to %d is %d\n", lower, upper, sum);
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    }
    printf("Done!");
    return 0;
}