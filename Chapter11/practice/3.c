#include <stdio.h>
#include <ctype.h>

#define SIZE 80
char * get_word(char *out);

int main(int argc, char *argv[])
{
    char output[SIZE];
    get_word(output);
    printf("First word you input is: %s", output);
    return 0;
}

char * get_word(char *out)
{
    char input[SIZE];
    char *in = input;
    puts("Enter a String");
    fgets(input, SIZE, stdin);
    while ((*in == '\n' || *in == '\t' || *in == ' ') && *in != '\0')
    {
        in++;
    }
    while (*in != '\n' && *in != '\t' && *in != ' ' && *in != '\0')
    {
        *out++ = *in++;
    }
    
    return out;
}