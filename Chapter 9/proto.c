#include <stdio.h>
int imax(int, int);
int main(void)
{
    printf("The maxinmum of %d and %d is %d.\n",
        3, 5, imax(3, 5));
    //replace it with 
    //imax(3) 
    //if you want to konw how the error occurs
    //VSCode is too smart and the red warnning signals quite annoys me
    printf("The maximum of %d and %d is %d.\n",
        3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(int n, int m)
{
    return (n > m ? n : m);
}