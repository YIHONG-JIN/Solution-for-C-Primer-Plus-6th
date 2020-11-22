#include <stdio.h>

int get_max(int number[], int n);

int main(void)
{
    int source[100] = {1, 2, 3, 4, 5};

    printf("The largest number in array is %d", get_max(source, 100));

    return 0;
}

int get_max(int number[], int n)
{
    int max = number[0];

    for (int i = 0; i < n; i++)
    {
        if (max < number[i])
        {
            max = number[i];
        }
    }
    
    return max;
}