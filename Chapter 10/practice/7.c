#include <stdio.h>
#define ROWS 12
#define COLS 5

void copy_arr(double t[], double s[], int n);
void copy_ptr(double *t, double *s, int n);
void copy_ptrs(double *t, double *s_first, double *s_last);
void copy_2d_array(double t[][ROWS], double s[][ROWS], int n);
void copy_2d_ptr(double (*t)[ROWS], double (*s)[ROWS], int n);

int main(void)
{
    double target[COLS][ROWS], source[COLS][ROWS] = {{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
                                                    {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
                                                    {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
                                                    {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
                                                    {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};
    
    copy_2d_ptr(target, source, COLS);
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%5.2f", target[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void copy_arr(double t[], double s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        t[i] = s[i];
    }
    return;
}

void copy_ptr(double *t, double *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(t+i) = *(s+i);
    }
    return;
}

void copy_ptrs(double *t, double *s_first, double *s_last)
{
    for (int i = 0; (s_last - s_first) > i; i++)
    {
        *(t+i) = *(s_first+i);
    }
    return;
}

void copy_2d_array(double t[][ROWS], double s[][ROWS], int n)
{
    for (int i = 0; i < n; i++)
    {
        copy_arr(t[i], s[i], ROWS);
    }
    return;
}

void copy_2d_ptr(double (*t)[ROWS], double (*s)[ROWS], int n)
{
    for (int i = 0; i < n; i++)
    {
        copy_ptr(*(t+i), *(s+i), ROWS);
    }
    return;
}