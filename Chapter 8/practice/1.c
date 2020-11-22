#include <stdio.h>

int main(void)
{
    int counter = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        counter++;
    }
    printf("The file has %d characters.\n", counter);
}