#include <stdio.h>
void chline(char ch, int cols, int rows);

int main(void)
{
    char c;
    int i, j;

    printf("Enter the char you want to print: ");
    scanf("%c", &c);
    printf("Enter the rows snd cols you want to print: ");
    scanf("%d %d", &j, &i);
    chline(c, i, j);

    return 0;
}

void chline(char ch, int cols, int rows)
{
    for (int m = 0; m < rows; m++)
    {
        for (int n = 0; n < cols; n++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return;
}