#include <stdio.h>
int main(void)
{
    //提前引入指针，初学者可使用 #define 代替
    char *Name, *Address;
    Name = "Johnny Kin";
    Address = "浙江大学国际校区";
    
    printf("%s\n", Name);
    printf("%s", Address);

    return 0;
}