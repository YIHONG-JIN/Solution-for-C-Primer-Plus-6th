#include <stdio.h>
#define SIZE 80
int is_within(char c, char * st);

int main(int argc, char *argv[])
{
    char source[SIZE];
    char dest = ' ';
    char *position;
    printf("Enter a String: ");
    fgets(source, SIZE, stdin);
    while (dest != EOF)
    {
        printf("Enter a char to find (EOF for Quit):");
        while ((dest = getchar()) == '\n')
        {
            continue;
        }
        if (is_within(dest, source) != 0)
        {
            printf("Found the char %c in the string\n", dest);
        }
        else
        {
            printf("Char %c not found. Try another?\n", dest);
        }
    }
    return 0;
}

int is_within(char c, char * st)
{
    while (*st != '\0')
    {
        if (*st == c)
        {
            return 1;
        }
        else
        {
            st++;
        }
    }
    return 0;
}