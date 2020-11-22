#include <stdio.h>
int main(void)
{
    char ch;
    int counter = 0;
    printf("Please input chars( # for exit): ");
    while ((ch = getchar()) != '#')
    {
        if (counter++ % 8 == 0)
        {
            printf("\n");
        }
        if (ch == '\n')
        {
            printf("'\\n'-%03d. ", ch);
        }
        else if (ch == '\t')
        {
            printf("'\\t'-%03d. ", ch);
        }
        else
        {
            printf("'%c'-%03d. \n", ch, ch);
        }
    }
    printf("Done\n");
    return 0;
}