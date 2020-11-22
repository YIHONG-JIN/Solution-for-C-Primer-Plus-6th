#include <stdio.h>

int main(int argc, char *argv[])
{
    int count = 0, sum = 0;
    printf("Enter the number of days you work:");
    scanf("%d", &count);
    while (count >0)
    {
        sum = sum + count--;
    }
    printf("You earned $ %d total!\n", sum);
    printf("Program Exit");
    return 0;
}