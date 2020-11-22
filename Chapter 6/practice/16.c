#include <stdio.h>
#include <string.h>
int main(void)
{
    float daphne, deirdre;
    daphne = deirdre = 100;
    int year = 0;
    do
    {
        daphne = daphne + 100 * 0.1;
        deirdre = deirdre*1.05;
        year++;
    } while (deirdre - daphne > 9);
    printf("5d years later.\nDaphne = %f.\nDeirdre = %f \n", year, daphne, deirdre);
    printf("\nDone!\n");
    return 0;
}