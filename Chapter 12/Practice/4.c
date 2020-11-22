#include <stdio.h>

static int count = 0;
int run_counter(void);

int main(int argc, char *argv[])
{
    for (int i = 0; i < 100; i++)
    {
        printf("The function run_time run %d times.\n", run_counter());
    }
    return 0;
}

int run_counter(void)
    {
        return ++count;
    }