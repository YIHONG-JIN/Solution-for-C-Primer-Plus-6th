#include <stdio.h>
int main(void)
{
    int data[8];
    data[0] = 2;

    for (int i = 1; i < 8; i++)
    {
        data[i] = data[i-1] * 2;
    }
    int i = 0;
    do
    {
        printf("%d", data[i++]);
    } while (i < 8);
    printf("\nDone!");
    return 0;
}