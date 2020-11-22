#include <stdio.h>
void jolly(void);
void deny(void);
int main()
{
    /*
    由于在前两章中尚未引入控制语句，此处三次调用函数jolly()
    读者在掌握控制语句之后，可以回到这里重写代码
    */
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!");
}