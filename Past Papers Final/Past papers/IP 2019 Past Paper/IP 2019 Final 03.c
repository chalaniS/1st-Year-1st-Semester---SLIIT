#include <stdio.h>
#include <assert.h>
#include<math.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();
int main(void)
{
    float invest=0;
    float annual=0;
    float total=0;
    float rate;

    printf("Enter investment amount :- ");
    scanf("%f", &invest);

    printf("Enter interest rate :- ");
    scanf("%f", &rate);

    annual = calcAnnualInterest(rate, invest);
    total = findTotalAmount(rate, invest);

    for(int i=0; i<5; i++)
    {
        printf("The total amount earned after year %d is %.2f\n",i+1,total);
        total = findTotalAmount(rate, total);
    }

}
float calcAnnualInterest(float interestRate, float amount)
{
    float interest = 0.0;
    if(amount>1000000.00)
    {
        interest = amount * ((interestRate/100)+0.5);
    }
    else
    {
        interest = amount * (interestRate/100);
    }

    return interest;
}
float findTotalAmount(float interestRate, float amount)
{
    float total= 0;

    total = calcAnnualInterest(interestRate, amount) + amount;
    return total;
}
void testTotalAmount()
{
    assert(fabs(findTotalAmount(10,10000)-11000.00) < 1);
}

