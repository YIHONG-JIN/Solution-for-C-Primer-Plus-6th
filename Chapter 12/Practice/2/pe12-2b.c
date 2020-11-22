#include <stdio.h>
#include "pe12-2a.h"

int main(void)
{
    extern int mode;
    int n;
    printf("Enter 0 for metric mode, 1 for US mode:");
    scanf("%d", &n);
    while (n >= 0)
    {
        set_mode(n);
        get_info();
        show_info();
        printf("Enter 0 for metric ,ode, 1 for US mode:");
        printf(" (-1 to quit ): ");
        scanf("%d", &n);
    }
    printf("Done.\n");
    return 0;
}
