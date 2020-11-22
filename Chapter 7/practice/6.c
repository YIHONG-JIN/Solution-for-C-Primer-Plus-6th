#include <stdio.h>
int main(void)
{
    int counter = 0;
    int halfpair = 0;
    char ch;
    printf("please input chars( # for exit): ");
    while ((ch = getchar() != '#'))
    {
        switch (ch)
        {
        case 'e':
            halfpair = 1;
            break;
        case 'i':
            if (halfpair == 1)
            {
                counter == 1;
                halfpair = 0;
            }
            break;
        default:
            halfpair = 0;
        }
    }
    printf("\nTotally exist %d \'ei\' in all char!\n", counter);
    printf("Done\n");
    return 0;
    
}