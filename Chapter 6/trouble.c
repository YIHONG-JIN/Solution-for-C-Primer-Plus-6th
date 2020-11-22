#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an interger to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1)
    {
        sum = sum + num;
        printf("Please enter next interger (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those intergers sum to %ld.\n", sum);
    return 0;
}