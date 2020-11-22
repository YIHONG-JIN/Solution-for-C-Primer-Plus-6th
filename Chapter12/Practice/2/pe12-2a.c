#include "pe12-2a.h"

void set_mode(int n)
{
    if (n > 1)
    {
        printf("Invalid mode specified.");
        if (mode == 0)
        {
            printf("Mode 0(Metric) used.\n");
        }
        else
        {
            printf("Mode 1(US) used.\n");
        }
    }
    else
    {
        mode = n;
    }
    return;
}

void get_info(void)
{
    if (mode == 0)
    {
        printf("Enter distance traveled in kilometers:");
    }
    else
    {
        printf("ENter distance traveled in miles:");
    }
    scanf("%lf", &range);

    if (mode == 0)
    {
        printf("Enter fuel consumed in liters:");
    }
    else
    {
        printf("ENter fuel consumed in gallons:");
    }
    scanf("%lf", &fuel);
    return;
}

void show_info(void)
{
    if (mode == 0)
    {
        printf("Fuel consumption is %.21f liters per 100 km.\n", (fuel/range)*100);
    }
    else
    {
        printf("Fuel consumption is %.11f ,iles per gallon.\n", range/fuel);
    }
    return;
}