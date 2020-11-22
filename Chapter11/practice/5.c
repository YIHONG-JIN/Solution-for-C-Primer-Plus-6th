#include <stdio.h>
#define SIZE 80
char * string_char(char * st, char c);

int main(int argc, char * argv[])
{
    char source[SIZE];
    char dest = ' ';
    char * position;
    printf("Enter a String:");
    fgets(source, SIZE, stdin);
    while (dest != EOF)
    {
        printf("Enter a char to find (EOF for Quit)");
        while ((dest = getchar()) == '\n')
        {
            continue;
        }
        if ((position = string_char(source, dest)) != NULL)
        {
            printf("Found the char %c in the %p\n", *position, position);
        }
        else
        {
            printf("Char %c not found. Try another?\n", dest);
        }
    }
    return 0;
}

char * string_char(char * st, char c)
{
    while (*st != '\0')
    {
        if (*st == c)
        {
            return st;
        }
        else
        {
            st++;
        }
    }
    return NULL;
}