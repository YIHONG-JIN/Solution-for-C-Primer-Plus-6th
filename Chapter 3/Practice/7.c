#include <stdio.h>
#define Inch_To_CM 2.54

int main(void)
{
    float inch, cm;
    printf("Enter the inch of your height:\n");
    scanf("%f", &inch);

    cm = inch*Inch_To_CM;
    printf("Hi, you are %.2f inch, or %.2f cm heigh\n", inch, cm);
    return 0;
}