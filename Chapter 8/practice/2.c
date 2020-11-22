#include <stdio.h>

int main(void)
{
    int counter = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (counter++ == 10)
        {
            printf("\n");
            counter = 1;
        }
        if (ch >= '\40')
        {
            printf(" \'%c\'--%3d ", ch, ch);
        }
        else if (ch == '\n')
        {
            printf(" \\n--\\n\n ");
            counter = 0;
        }
        else if (ch == '\t')
        {
            printf(" \\t--\\t ");
        }
        else
        {
            printf(" \'%c\'--^%c ", ch, (ch + 64));
        }
    }
    return 0;
}