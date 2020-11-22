#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80
#define NUMBER 5

void show_menu(void);
void input_string(int number, char st[][SIZE]);
void print_original(int number, char st[][SIZE]);
void print_ascii(int number, char st[][SIZE]);
void print_length(int number, char st[][SIZE]);
void print_words(int number, char st[][SIZE]);
void sort_order(int number, int order[][2]);
int get_word_length(char *input);

int main(int argc, char *argv[])
{
    char test[NUMBER][SIZE];
    int selected;
    input_string(NUMBER, test);
    show_menu();
    scanf("%d", &selected);
    while (selected != 5)
    {
        switch (selected)
        {
        case 1:
            print_original(NUMBER, test);
            break;
        case 2:
            print_ascii(NUMBER, test);
            break;
        case 3:
            print_length(NUMBER, test);
            break;
        case 4:
            print_words(NUMBER, test);
            break;
        case 5:
            break;
        default:
            printf("Error select, retry!\n");
        }
    show_menu();
    scanf("%d", &selected);
    }
    printf("All done, bye.");
}

void show_menu()
{
    printf("===========================================================\n");
    printf("1) print original strings.   2) print string by ascii order\n");
    printf("3) printf string by length.  4) print string by word length\n");
    printf("5) quit\n");
    printf("===========================================================\n");
    
    return;
}

void input_string(int number, char st[][SIZE])
{
    printf("Please input 5 strings seperated by enter.\n");
    for (int i = 0; i < number; i++)
    {
        fgets(st[i], SIZE, stdin);
    }
    
    return;
}

void print_original(int number, char st[][SIZE])
{
    printf("print 5 strings in original mode.\n");
    for (int i = 0; i < number; i++)
    {
        printf("%d. %s", i, st[i]);
    }
    
    return;
}

void print_ascii(int number, char st[][SIZE])
{
    printf("print 5 strings in ascii mode.\n");
    int order[number][2];
    for (int i = 0; i < number; i++)
    {
        order[i][0] = i;
        order[i][1] = st[i][0];
    }
    sort_order(number, order);
    for (int i = 0; i < number; i++)
    {
        printf("ASCII No.%d. %s", i, st[order[i][0]]);
    }
    return;
}

void print_length(int number, char st[][SIZE])
{
    printf("print 5 strings in length mode.\n");
    int order[number][2];
    for (int i = 0; i < number; i++)
    {
        order[i][0] = i;
        order[i][1] = strlen(st[i]);
    }
    sort_order(number, order);
    for (int i = 0; i < number; i++)
    {
        printf("Length No.%d. %s", i, st[order[i][0]]);
    }
    return;
}

void print_words(int number, char st[][SIZE])
{
    printf("print 5 strings in words mode.\n");
    int order[number][2];
    for (int i = 0; i < number; i++)
    {
        order[i][0] = i;
        order[i][1] = get_word_length(st[i]);
    }
    sort_order(number, order);
    for (int i = 0; i < number; i++)
    {
        printf("WORDS No.%d. %s", i, st[order[i][0]]);
    }
    return;
}

void sort_order(int number, int order[][2])
{
    int temp[2];
    for (int i = 0; i < number - 1; i++)
    {
        for (int j = 0; j < number - 1 - i; j++)
        {
            if (order[j][1] > order[j+1][1])
            {
                temp[0] = order[j][0];
                temp[1] = order[j][1];
                order[j][0] = order[j+1][0];
                order[j][1] = order[j+1][1];
                order[j+1][0] = temp[0];
                order[j+1][1] = temp[1];
            }
        }
    }
    return;
}

int get_word_length(char *input)
{
    char *in = input;
    int length = 0;
    while (isalpha(*in) != 0)
    {
        in++;
        length++;
    }
    return length;
}