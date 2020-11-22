#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    int width;

    printf("Please input your name:");
    scanf("%s", name);
    
    width = strlen(name);

    printf("\"%20s\".\n", name);
    printf("\"%-20s\".\n", name);
    printf("\"%*s\".", (width + 3), name);
    return 0;
}