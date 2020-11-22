#include <stdio.h>

void r_sort(double number[], int n);

int main(void)
{
    double source[12] = {2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3};

    for (int i = 0; i < 12; i++)
    {
        printf("%g ", source[i]);
    }
    printf("\n");
    r_sort(source, 12);
    for (int i = 0; i < 12; i++)
    {
        printf("%g ", source[i]);
    }
    return 0;
}

void r_sort(double number[], int n)
{
    double temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (number[j] < number[j+1])
            {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    return;
}