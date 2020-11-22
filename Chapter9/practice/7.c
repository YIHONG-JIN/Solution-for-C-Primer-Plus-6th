#include <stdio.h>

void get_char_pos(void);
int position(char ch);

int main(void)
{
    get_char_pos;
}

void get_char_pos(void)
{
    char ch;
    printf("Enter the chars(ended by EOF, not enter):");
    while ((ch = getchar()) != EOF)
    {
        if ((ch = getchar()) == '\n')
        {
            continue;
        }
        if (position(ch) != -1)
        {
            printf("The char %c's position is alphabet is %d.\n", ch, position(ch));
        }
        else
        {
            printf("%c is not a alphabet.\n", ch);
        }
    }
}

int position(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch -'A' + 1;
    }
    if (ch >= 'a' && ch <='z')
    {
        return ch -'a' + 1;
    }
    return -1;
}