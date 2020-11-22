#include <stdio.h>
#include <string.h>
int main(void)
{
    char data[256];
    printf("Enter the char in a line: ");
    int i = 0;
    do
    {
        scanf("%c", &data[i]);
    } while (data[i] != '\n' && ++i);

    printf("The reverse char of the data: ");
    for (i--; i>=0; i--)
    {
        printf("%c", data[i]);
    }
    printf("\nDone!\n");
    return 0;
}