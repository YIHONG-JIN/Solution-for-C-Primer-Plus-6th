#include <stdio.h>
int main(void)
{
    int counter = 0;
    char ch;
    printf("Please input chars( # for exit): ");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '!':
            printf("!!");
            counter++;
            break;
        case '.':
            printf("!");
            counter++;
            break;
        default:
            printf("%c", ch);
        }
    }
    printf("\nTotal replace %d times\n", counter);
    printf("DOne\n");
    return 0;
}