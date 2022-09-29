#include <stdio.h>
int main (void)
{
    int type;
    char size;
    char credit,loyalty,online;
    int num;
    float price;
    float sum = 0;


        printf("Input pizza type :- ");
        scanf("%d", &type);

    while( type != -1)
   {

        printf("Enter pizza size :- ");
        scanf(" %c", &size);


    if ((type == 1 || type == 2) && (size == 'L' || size == 'l' || size == 'M' || size == 'm'))
    {
        if((type == 1) && (size == 'L' || size == 'l'))
            {price = 1720.00;}

        if((type == 1) && (size == 'M' || size == 'm'))
            {price = 975.00;}

        if((type == 2) && (size == 'L' || size == 'l'))
            {price = 1820.00;}

        if((type == 2) && (size == 'M' || size == 'm'))
            {price = 1000.00;}

        printf("Enter the number of pizzas you want :- ");
        scanf("%d", &num);

            sum = sum + (price * num);

       puts("");

        } else
        {printf("Enter valid input\n");}

            printf("Input pizza type :- ");
            scanf("%d", &type);

   }
        puts("");

        printf("Are you paying by credit card (Y/N) :- ");
        scanf(" %c", &credit);

        printf("Are you a loyalty customer (Y/N) :- ");
        scanf(" %c", &loyalty);

        printf("Is this an Online order (Y/N) :- ");
        scanf(" %c", &online);

        printf("Total bill = %.2f\n",sum);

        if((credit == 'y') || (credit == 'Y'))
        {
            printf("Discount = %.2f\n",0.2 * sum);
            printf("Net amount = %.2f\n", 0.8 * sum);

        }

        if((loyalty == 'y') || (loyalty == 'Y'))
        {
            printf("Discount = %.2f\n",0.75 * sum);
            printf("Net amount = %.2f\n", 0.85 * sum);

        }

        if((online == 'y') || (online == 'Y'))
        {
            printf("Discount = %.2f\n",0.05 * sum);
            printf("Net amount = %.2f\n", 0.95 * sum);
        }




}
