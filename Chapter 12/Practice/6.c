#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define LENGTH 1000

int main(int argc, char *argv[])
{
    int data_count[SIZE+1];
    int datum;
    for (int seed = 0; seed <= 10; seed++)
    {
        srand(seed);
        for (int i = 0; i <= SIZE; i++)
        {
            data_count[i] = 0;
        }
        for (int i = 0; i < LENGTH; i++)
        {
            datum = rand() % 10 + 1;
            data_count[datum]++;
        }
        printf("Random data created, let's state it.\n");
        for (int i = 1; i <= SIZE; i++)
        {
            printf("The datum %d created %d times.\n",i,data_count[i]);
        }
    }
    return 0;
}