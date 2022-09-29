#include <stdio.h>

int main (void)
{
	int type, unit;
	float charge;
	
	printf("Customer Type : ");
	scanf("%d", &type);
	
	printf("Number of units : ");
	scanf("%d", &unit);
	
	if(unit<=100)
	{
		charge = (float)unit * 10.00;
	}
	
	else if( unit > 100)
	{
		charge = (float)(unit -100 ) * 30.00 + 1000.00;
	}
	
	if(type == 1 && unit > 100)
	{
		charge += charge * 0.20;
	}
	
	printf("\nMonthly charge :Rs. %.2f", charge);
	
	
	return 0;
}
