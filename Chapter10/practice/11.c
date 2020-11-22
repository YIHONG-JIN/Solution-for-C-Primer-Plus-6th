#include <stdio.h>
#define COLS 5
#define ROWS 3

void show_element(int rows, int cols, const int t[rows][cols]);
void double_element(int rows, int cols, int t[rows][cols]);

int main(void)
{
    int arr[ROWS][COLS] = { {1, 0, 4, 6, 9},
                            {2, 5, 6, 8, 3},
                            {5, 3, 21, 1, 6} };
    show_element(ROWS, COLS, arr);
    double_element(ROWS, COLS, arr);
    printf("\n");
    show_element(ROWS, COLS, arr);
    return 0;
}

void show_element(int rows, int cols, const int t[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%4d", t[i][j]);
        }
        printf("\n");
    }
    return;
}

void double_element(int rows, int cols, int t[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            t[i][j] *= 2;
        }
    }
    return;
}