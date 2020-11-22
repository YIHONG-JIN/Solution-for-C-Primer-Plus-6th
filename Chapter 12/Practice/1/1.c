#include <stdio.h>

void critic(int* n);

int main(int argc, char *argv[])
{
    int units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
    {
        critic(&units);
    }
    printf("You must have looked it up!\n");
    return 0;
}

void critic(int* n)
{
    printf("No luscky, my friends. Try again.\n");
    scanf("%d", n);

    return;
}