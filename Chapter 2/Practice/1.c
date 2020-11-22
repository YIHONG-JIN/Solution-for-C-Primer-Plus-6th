#include <stdio.h>
int main(void)
{
    //提前引入指针，初学者可使用 #define 代替
    char *First_Name, *Second_Name;
    First_Name = "Johnny";
    Second_Name = "Kin";

    printf("%s %s\n", First_Name, Second_Name);
    printf("%s\n", First_Name);
    printf("%s\n", Second_Name);
    printf("%s ", First_Name);
    printf("%s", Second_Name);
    return 0;
}