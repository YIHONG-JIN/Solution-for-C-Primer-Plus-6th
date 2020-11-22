#include <stdio.h>

int main(int argc, char *argv[])
{
    int datum;
    do
    {
        printf("Enter a number( 0 to exit ):");
        scanf("%d", &datum);
        if (datum < 2)
        {
            if (datum == 0)
            {
                break;
            }
            printf("%d is out of range, retry.\n", datum);
            continue;
        }
        printf("You input %d, so the prime from %d to 2 is: ", datum, datum);
        for (int i = datum; i > 1; i--)
        {
            int is_prime = 1;
            for (int j = 2; j <= i/2 ; j++)
            {
                if (i%j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime == 1)
            {
                printf("%d, ", i);
            }
        }
        printf("\n");
    } while (datum != 0);
    printf("Done! bye.");
    return 0;
}