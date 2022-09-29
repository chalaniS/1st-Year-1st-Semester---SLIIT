#include<stdio.h>
int main (void)
{
    char type;
    int i;
    int hospitality = 0,marketing = 0,finance = 0;
    float sumhospitality = 0;
    float summarketing = 0;
    float sumfinance = 0;

    for(i=0; i<100; i++)
    {
        printf("Enter the course type :- ");
        scanf(" %c", &type);

        if((type == 'H') || (type == 'h'))
        {
            hospitality++;
            sumhospitality = sumhospitality + 1500.00;
        }

        else if((type == 'M') || (type == 'm'))
        {
            marketing++;
            summarketing = summarketing + 2000.00;
        }
        else if((type == 'F') || (type == 'f'))
        {
            finance++;
            sumfinance = sumfinance + 2500.00;
        }
        else
        {
            printf("Enter valid course type\n");
        }

    }
        printf("\n\nTotal number of students for Hospitality Management :- %d\n", hospitality);
        printf("Total number of students for Marketing :- %d\n", marketing);
        printf("Total number of students for Finance :- %d\n\n", finance);

        printf("Total earned from Hospitality Management :- %.2f\n", sumhospitality);
        printf("Total earned from Marketing :- %.2f\n", summarketing);
        printf("Total earned from Finance :- %.2f\n\n", sumfinance);


}
