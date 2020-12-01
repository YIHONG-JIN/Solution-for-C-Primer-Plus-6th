#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fp;
    char ch;
    for (int i = 0; i < argc - 1; i++)
    {
        if ((fp = fopen(argv[i+1], "r")) != NULL)
        {
            printf("Now print file %s:\n", argv[i+1]);
            while ((ch = getc(fp)) != EOF)
            {
                putchar(ch);
            }
            printf("\n");
            fclose(fp);
        }
        else
        {
            printf("Open %s failed\n", argv[i]);
            exit(EXIT_FAILURE);
        }
    }
    printf("All done, it is %d file printed.\n", argc - 1);
    return 0;
}