#include <stdio.h>
#define Mass_Per 3.0e-23
#define Mass_Per_Quart 950

int main(void)
{
    float quart,quantity;
    printf("Enter how many quart:");
    scanf("%f", &quart);

    quantity = quart * Mass_Per_Quart/Mass_Per;

    printf("There are %e molecule. \n", quantity);
    return 0;
}