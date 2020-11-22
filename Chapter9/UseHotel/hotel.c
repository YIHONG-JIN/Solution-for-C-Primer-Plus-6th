/*
In this part, if you are using VSCode rather than other IDE, 
you may need to know somthing about gcc commands.
For this little project, the gcc command which I used is "gcc usehotel.c hotel.c -o usehotel"
This command will link this two file together and generate an excutable file named usehotel.exe.
In Windows, this file can be directly opened.
If you want to know more about gcc commands, please google it for yourself,
for it is not included in this book.
*/
#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) Fairfield Arms          2) Hotel Olympic\n");
    printf("2) Chertworthy Plaza       4) The Stockton\n");
    printf("5) quit\n");
    printf("%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 ||(code < 1 || code > 5))
    {
        if (status != 1)
        {
            scanf("%*s");
        }
        printf("Enter an integer from 1 to 5, please.\n");
    }

    return code;
}

int getnights(void)
{
    int nights;

    printf("How many nights are needed? ");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s");
        printf("Please enter an integer, such as 2.\n");
    }
    
    return nights;
}

void showprice(double rate, int nights)
{
    int n;    
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
    {
        total += rate * factor;
    }
    printf("The totalcost will be $0.2f.\n", total);
    
    return;
}