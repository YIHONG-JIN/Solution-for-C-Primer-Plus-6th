#include<stdio.h>
void br(void);
void ic(void);

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    br();
    printf("\n");
    ic();
    
    return 0;
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}