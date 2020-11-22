#include <stdio.h>
#include <ctype.h> //This library is included just for someone who would like to use another method

int main(void)
{
    int words = 0;
    int letter = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z'))
        {
            letter++;
        }
        /*
        If you would like to use <ctype.h>, try codes below
        if (isalpha(ch) != 0)
        {
            letter++;
        }
        */
       if (ch == ' ' || ch == ',' || ch == '.' || ch == '\n')
       {
           words++;
       }
       /*
       if (ispunct(ch) != 0 || ch == ' ') //pay attention to " ch == ' ' "
       {
           words++;
       }
       */
    }
    printf("There are %d words, and %d character, %.2f C/W!\n", words, letter, 1.0*letter/words);

    return 0;
}