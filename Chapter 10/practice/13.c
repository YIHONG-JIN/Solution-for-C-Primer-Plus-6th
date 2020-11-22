#include <stdio.h>
#define ROWS 3
#define COLS 5

void input_array(int rows, double arr[][COLS]);
double col_average(int cols, const double arr[]);
double array_average(int rows, const double arr[][COLS]);
double array_max_number(int rows, const double arr[][COLS]);
void show_result(int rows, const double arr[][COLS]);

int main(void)
{
    double array[ROWS][COLS];
    input_array(ROWS, array);
    show_result(ROWS, array);
    printf("\n");
    return 0;
}

void input_array(int rows, double arr[][COLS])
{
    printf("Enter the array number.\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Enter five double number seprate by enter:\n");
        for (int j = 0; j < COLS; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    return;
}

double col_average(int cols, const double arr[])
{
    double sum = 0;
    for (int i = 0; i < cols; i++)
    {
        sum += arr[i];
    }
    return sum/cols;
}

double array_average(int rows, const double arr[][COLS])
{
    double sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += col_average(COLS, arr[i]);
    }
    return sum / rows;
}

double array_max_number(int rows, const double arr[][COLS])
{
    double max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

void show_result(int rows, const double arr[][COLS])
{
    printf("Now, Let\'s check the array!\n");
    printf("The array you input is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%5g", arr[i][j]);
        }
        printf("\n");
    }
    printf("The Average of every column is:\n");
    for (int i = 0; i < rows; i++)
    {
        printf("The %d column's average is %g.\n", i, col_average(COLS, arr[i]));
    }
    printf("The array's data average is %g\n", array_average(ROWS, arr));
    printf("The max datum in the array is %g", array_max_number(ROWS, arr));
    return;
}