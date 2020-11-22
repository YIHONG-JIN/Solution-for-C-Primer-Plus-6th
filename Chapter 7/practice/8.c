#include <stdio.h>
#define EXTRA_HOUR 1.5
#define BASE_TAX 0.15
#define EXTRA_TAX 0.2
#define EXCEED_TAX 0.25

void show_menu(void);
void calc_salary(float base_salary, float hours);

int main(void)
{
    float hours = 0;
    char selected;
    do
    {
        show_menu();
        scanf("%c", &selected);
        switch (selected)
        {
        case '1':
            printf("Hello, you select $8.75/hr. Enter the work hours: ");
            scanf("%f", &hours);
            calc_salary(8.75, hours);
            break;
        case '2':
            printf("Hello, you select $8.75/hr. Enter the work hours: ");
            scanf("%f", &hours);
            calc_salary(9.33, hours);
            break;
        case '3':
            printf("Hello, you select $8.75/hr. Enter the work hours: ");
            scanf("%f", &hours);
            calc_salary(10.00, hours);
            break;
        case '4':
            printf("Hello, you select $8.75/hr. Enter the work hours: ");
            scanf("%f", &hours);
            calc_salary(11.20, hours);
            break;
        case '5':
            break;
        default:
            printf("Erroe selected! Please retry!\n");
            getchar();
            break;
        }
    } while (selected != '5');
    printf("Done\n");
    return 0;
}
void show_menu(void)
{
    char s1[] = "1) $8.75/hr";
    char s2[] = "2) $9.33/hr";
    char s3[] = "3) $10.00/hr";
    char s4[] = "4) $11.20/hr";
    char s5[] = "5) quit";

    printf("***************************************\n");
    printf("%-40s\n", s1);
    printf("%-40s\n", s2);
    printf("%-40s\n", s3);
    printf("%-40s\n", s4);
    printf("%-40s\n", s5);
    printf("***************************************\n");
}
void calc_salary(float base_salary, float hours)
{
    float salary, tax, taxed_salary;
    if (hours <= 30)
    {
        salary = hours * base_salary;
        tax = salary * BASE_TAX;
        taxed_salary = salary - tax;
    }
    else if (hours <= 40)
    {
        salary = hours * base_salary;
        tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
        taxed_salary = salary - tax;
    }
    else
    {
        salary = (40 + (hours - 40) * EXTRA_HOUR) * base_salary;
        if (salary <= 450)
        {
            tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX;
        }
        else
        {
            tax = 300 * BASE_TAX + (salary - 300) * EXTRA_TAX + (salary - 450) * EXCEED_TAX;
        }
        taxed_salary = salary - tax;
    }
    printf("Your salary before tax is %.2f, tax is %.2f, salary after tax is %.2f\n", salary, tax, taxed_salary);
    printf("\ncontinue...\n");
}