#include <stdio.h>

int get_max_index(double number[], int n);

int main(void)
{
    double source[100] = {2.5, 3.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3};

    printf("The largest number's index in array is %d", get_max_index(source, 100));

    return 0;
}

int get_max_index(double number[], int n)
{
    double max = number[0];
    int index = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (max < number[i])
        {
            max = number[i];
            index = i;
        }
    }
    
    return index;
}