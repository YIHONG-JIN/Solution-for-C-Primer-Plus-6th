#include <stdio.h>
#include <string.h>
#define DENSITY 62.4
int main()
{
    float weight, volumn;
    int size, letters;
    char name[40];

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what is your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volumn = weight/DENSITY;
    printf("Well, %s, your volumn is %.2f cubic feet. \n", name, volumn);

    return 0;
    

}