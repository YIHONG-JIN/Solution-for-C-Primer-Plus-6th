#include <float.h>
#include <limits.h>
#include <stdio.h>
int main(void)
{
    int big_int = 2147483647;
    float big_float = 3.4e38;
    float small_float = 10.0 / 3;

    printf("The big int data is %d\n", big_int + 1);
    printf("The big float data is %f\n", big_float * 10);
    printf("The small float data is %f\n", small_float);
    printf("The MAX float data is %f\n", FLT_MAX);
    printf("The MAX int data is %ld\n", INT_MAX);

    return 0;

}