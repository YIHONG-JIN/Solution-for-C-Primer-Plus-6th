#include <stdio.h>
#include <stdint.h>
int main(void)
{
    int32_t array[9] = {2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d", *(array+8));
    return 0;
}