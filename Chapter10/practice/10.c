#include <stdio.h>
#define INDEX 4

void add_array(int n, int t[n], const int s1[n], const int s2[n]);

int main(void)
{
    int sum[INDEX], s1[INDEX] = {2, 4, 5, 8}, s2[INDEX] = {1, 0, 4, 6};
    add_array(INDEX, sum, s1, s2);
    for (int i = 0; i < INDEX; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}

void add_array(int n, int t[n], const int s1[n], const int s2[n])
{
    for (int i = 0; i < n; i++)
    {
        t[i] = s1[i] + s2[i];
    }
    return;
}