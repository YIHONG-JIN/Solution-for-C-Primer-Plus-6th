#include <stdio.h>

void show_menu(void);
float get_number(void);

int main(void)
{
    char operate;
    float first, second;
    do
    {
        show_menu();
        operate = getchar();
        while (getchar() != '\n')
        {
            continue;
        }
        switch (operate)
        {
        case 'a':
            printf("Enter first number: ");
            first = get_number();
            printf("Enter second number: ");
            second = get_number();
            printf("%g + %g = %g \n", first, second, first+second);
            break;
        case 's':
            printf("Enter first number: ");
            first = get_number();
            printf("Enter second number: ");
            second = get_number();
            printf("%g - %g = %g \n", first, second, first-second);
            break;
        case 'm':
            printf("Enter first number: ");
            first = get_number();
            printf("Enter second number: ");
            second = get_number();
            printf("%g * %g = %g \n", first, second, first*second);
            break;
        case 'd':
            printf("Enter first number: ");
            first = get_number();
            printf("Enter second number: ");
            second = get_number();
            printf("%g / %g = %g \n", first, second, first/second);
            break;
        case 'q':
            break;
        default:
            printf("Please enter a char, such as a, s, m, d and q: \n");
            while (getchar() != '\n')
            {
                continue;
            }
            break;
        }
    } while (operate != '\n');
    printf("Bye!\n");
    return 0;
}

void show_menu(void)
{
    printf("Enter the operation of your choice:\n");
    printf("a. add               s. subtract \n");
    printf("m. multiply          d. divide \n");
    printf("q. quit \n");
}

float get_number(void)
{
    float f;
    char c;
    while (scanf("%g", &f) != 1)
    {
        while ((c = getchar()) != '\n')
        {
            putchar(c);
        }
    printf(" is not an number.\n");
    printf("Please enter a number, such as 2.5, -1, 78E8, or 3: ");
    }
    return f;
}
