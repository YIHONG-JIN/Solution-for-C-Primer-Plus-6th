#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 512

int main(int argc, char* argv[])
{
    FILE *f_src, *f_dest;
    char buff[BUFFER_SIZE];
    if (argc != 3)
    {
        printf("Usage:%s src_file dest_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    else
    {
        if ((f_src = fopen(argv[1], "rb")) == NULL)
        {
            printf("Can't open %s.\n", argv[1]);
            exit(EXIT_FAILURE);
        }
        if ((f_dest = fopen(argv[2], "wb")) == NULL)
        {
            printf("Can't open %s.\n", argv[2]);
            exit(EXIT_FAILURE);
        }
    }
    size_t bytes;
    while ((bytes = fread(buff, sizeof(char), BUFFER_SIZE, f_src)) > 0)
    {
        fwrite(buff, sizeof(char), bytes, f_dest);
    }
    fclose(f_src);
    fclose(f_dest);
    return 0;
}