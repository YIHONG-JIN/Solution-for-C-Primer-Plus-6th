#include <stdio.h>

int main(void)
{
    float input;
    printf("&ENter a floating-point value:");
    scanf("%f", &input);

    printf("fixed-point notation: %f \n", input);
    printf("exponential notation: %e \n", input);
    printf("p natation: %a \n", input);

    return 0;
}