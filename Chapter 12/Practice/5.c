#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void sort(int array[], int n);

int main(int argc, char *argv[])
{
    int data[SIZE];

    srand((unsigned int)time(0));
    for (int i = 0; i < SIZE; i++)
    {
        data[i] = rand() % 10 + 1;
    }
    printf("The original data is: ");
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%4d", data[i]);
    }
    sort(data,SIZE);
    printf("The sorted data is: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%4d", data[i]);
    }
    printf("\n");
}

void sort(int array[], int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; i < n; i++)
        {
            if (array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return;
}