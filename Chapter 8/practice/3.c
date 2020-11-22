#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int lowercase = 0;
    int uppercase = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            uppercase++;
        }
        if (ch >= 'a' && ch <= 'z')
        {
            lowercase++;
        }
    }
    printf("There are %d uppercase, and %d lowercase in that file!\n", uppercase, lowercase);

    return 0;
}