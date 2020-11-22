/* two_func.c --一个文件中包含两个函数 */
#include<stdio.h>
void bulter(void); /* ANSI/ISO C 函数原型*/
int main(void)
{
    printf("I will summon the bulter function.\n");
    bulter();
    printf("Yes. Bring me some tea and writeable DVDs. \n");

    return 0;
}

void bulter (void)
{
    printf("You rang, Sir?\n");
}