/* escape.c -- 使用转义序列 */
/* 
I highly recommend you to set some checkpoints for understanding the function of \ characters 
It is a little different from the textbook
*/
#include <stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired mouthly salary:");
    printf("$_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12);
    printf("\rGee!\n");

    return 0;

}