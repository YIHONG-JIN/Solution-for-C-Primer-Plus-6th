#include <stdio.h>
int main(void)
{
    float speed, size, time;
    printf("Please input the net speed(megabits per second): ");
    scanf("%f", &speed);
    printf("Please input the file size(megabyte): ");
    scanf("%f", &size);
    time = size*8/speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds.", speed, size, time);
    return 0;
}