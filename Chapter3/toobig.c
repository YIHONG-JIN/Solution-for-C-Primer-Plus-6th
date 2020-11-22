/* toobig.c --超出系统允许的最大int值 */
#include <stdio.h>
int main(void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n", i, i+1, i+2);
    printf("%d %d %d\n", j, j+1, j+2); //某些编译器会输出-1，但这不是一个很重要的问题

    return 0;
}