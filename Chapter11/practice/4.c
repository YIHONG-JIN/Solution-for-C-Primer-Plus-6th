#include <stdio.h>
#include <ctype.h>
#define SIZE 80
char * get_word(char *out, int n);

int main(int argc, char *argv[])
{
    char output[SIZE];
    get_word(output, SIZE);
    printf("First word you input is: %s", output);
    return 0;
}

char * get_word(char * out, int n)
{
    char input[SIZE];
    char *in = input;
    int i = 0;
    puts("Enter a String:");
    fgets(input, SIZE, stdin);

    while ((*in == '\n' || *in =='\t' || *in == ' ') && *in != '\0')
    {
        in++;
    }
    
    while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0' && i < n)
    {
        *out++ = *in++;
        i++;
    }
    return out;
}