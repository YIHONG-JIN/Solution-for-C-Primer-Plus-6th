#include <stdio.h>
void copy_array(int n, int m, double target[n][m], const double source[n][m]);
void show_array(int n, int m, const double array[n][m]);

int main(void)
{
    int n = 3;
    int m = 5;
    double target[n][m], source[][5] = {{0.2, 0.4, 2.4, 3.5, 6.6},
                                        {8.5, 8.2, 1.2, 1.6, 2.4},
                                        {9.1, 8.5, 2.3, 6.1, 8.4}};
    copy_array(n, m, target, source);
    show_array(n, m, target);
    return 0;
}

void copy_array(int n, int m, double target[n][m], const double source[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            target[i][j] = source[i][j];
        }
    }
    return;
}

void show_array(int n, int m, const double array[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%g ", array[i][j]);
        }
        printf("\n");
    }
    
}