#include <stdio.h>
#include <stdlib.h>

void copy_ptr(double *t, double *s, int n);

int main(void)
{
    double src[] = {1, 2, 3, 4, 5, 6, 7};
    double targ[3];

    copy_ptr(targ, src + 2, 3);
    printf("Now show the src array:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%0.1f ", src[i]);
    }
    
    printf("\nNow Show the dest array:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%0.1f ", targ[i]);
    }
    
    return 0;
}

void copy_ptr(double *t, double *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(t+i) = *(s+i);
    }
    return;
}