#include <stdio.h>
#define MOUTHS 12
int main(void)
{
    int days[MOUTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;

    for (i = 0; i < MOUTHS; i++)
    {
        printf("%2d %d\n", i+1, days[i]);
    }

    return 0;
}