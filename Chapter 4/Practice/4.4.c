#include <stdio.h>
int main(void)
{
    float heigh;
    char name[40];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hi %s, how tall you are(inch): ", name);
    scanf("%f", &heigh);
    printf("%s, you are %.3f feet tall \n", name, heigh/12.0);

    return 0;
}