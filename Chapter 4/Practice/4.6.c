#include <stdio.h>
int main(void)
{
    char name[40], surname[40];
    int wname, wsurname;
    
    printf("Please input your first name:");
    scanf("%s", name);
    printf("Please input your last name:");
    scanf("%s", surname);

    wname = printf("%s", name);
    printf(" ");
    wsurname = printf("%s", surname);

    printf("\n%*d %*d\n", wname, wname, wsurname, wsurname);

    wname = printf("%s", name);
    printf(" ");
    wsurname = printf("%s", surname);

    printf("\n%-*d %-*d", wname, wname, wsurname, wsurname);

    return 0;
}