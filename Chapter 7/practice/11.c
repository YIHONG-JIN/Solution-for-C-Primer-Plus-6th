#include <stdio.h>
#define PRICE_ARTI 2.05
#define PRICE_BEET 1.15
#define PRICE_CARROT 1.09
#define DISCOUNT 0.05

void show_menu(void);
float get_weight(void);

int main(void)
{
    float w_arti = 0;
    float w_beet = 0;
    float w_carrot = 0;
    char selected;
    float weight, amount, rebate, freight, total;

    do
    {
        show_menu();
        scanf("%c", &selected);
        switch (selected)
        {
        case 'a':
            w_arti += get_weight();
            break;
        case 'b':
            w_beet += get_weight();
            break;
        case 'c':
            w_carrot += get_weight();
            break;
        case 'q':
            break;
        default:
            printf("Erroe input, retry!\n");
            break;
        }
    } while (selected != 'q');
    
    amount = w_arti * PRICE_ARTI + w_beet * PRICE_BEET + w_carrot * PRICE_CARROT;
    weight = w_arti + w_beet + w_carrot;

    if (amount >= 100)
    {
        rebate = amount * DISCOUNT;
    }
    else
    {
        rebate = 0;
    }

    if (weight <= 5)
    {
        freight = 6.5;
    }
    else if (weight > 5 && weight <= 20)
    {
        freight = 14;
    }
    else
    {
        freight = 14 + (weight - 20) * 0.5;
    }

    total = amount + freight - rebate;

    printf("The price of vegetable:\nartichoke %g$/pound, beet %g$/pound, carrot %g$/pound.\n", 
            PRICE_ARTI, PRICE_BEET, PRICE_CARROT);
    printf("You order %g pound artichoke, %g pound beet, %g pound carrot.\n", 
            w_arti, w_beet, w_carrot);
    printf("You total order %g pounds, discunt %g$, amount %g$, freight %g$, total %g$.\n",
            weight, rebate, amount, freight, total);
    printf("Done\n");

    return 0;
}

void show_menu(void)
{
    printf("********************************************************************\n");
    printf("Enter the char corresponding to the desired vegetable.\n");
    printf("a) artichoke                                b)beet\n");
    printf("c) carrot                                   q)checkout\n");
    printf("********************************************************************\n");
    printf("Please input the vegetable you want to buy(a,b,c or q for quit): ");
}

float get_weight(void)
{
    float weight;
    char q;
    printf("Please input hpw many pounds you buy:");
    scanf("%f", &weight);
    printf("Ok, add %g pound to cart. \n", weight);
    while (getchar() != '\n')
    {
    }
    
    return weight;
}