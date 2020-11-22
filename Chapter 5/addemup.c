#include <stdio.h>
int main(void)
{
    int count, sum;
    count = 0;
    sum = 0;
    while (count++ < 20)
        sum = sum + count;//非复合语句不需要加花括号
    printf("sum = %d\n", sum);

    return 0;
}