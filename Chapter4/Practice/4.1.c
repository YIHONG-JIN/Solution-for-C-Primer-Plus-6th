#include <stdio.h>
int main(void)
{
    char First_Name[40];
    char Last_Name[40];
    
    printf("Please input your first name:");
    scanf("%s", First_Name);
    printf("Please input your last name:");
    scanf("%s", Last_Name);

    printf("Hello, %s, %s", First_Name, Last_Name);

    return 0;

}