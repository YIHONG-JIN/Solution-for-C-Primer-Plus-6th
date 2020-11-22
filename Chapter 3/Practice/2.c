#include <stdio.h>
int main(void)
{
    int input;
    
    printf("Please enter an ASCII value:\n");
    scanf("%d",&input);
    printf("Your input value is %d, and the corresponding charater is %c", input, input);

    return 0;
}