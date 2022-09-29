#include <stdio.h>

int main (void)
{
	int type;
	float amount, discount = 0;
	
	printf("Customer Type : ");
	scanf("%d", &type);
	
	printf("Bill amount : Rs. ");
	scanf("%f", &amount);
	
	if( type == 1 && amount <= 2500)
	{
		discount = amount * (5/100.00);
	}
	
	else if( type == 1 && amount > 2500)
	{
		discount = amount * (10/100.00);
	}
	
	else if( type == 2 && amount > 5000)
	{
		discount = amount * (10/100.00);
	}
	
	else
	{
		discount = 0;
	}
	
	printf("Discount amount : Rs. %.2f\n", discount);
	
	printf("Final Bill Amount : Rs. %.2f\n", amount - discount);
	
	
	
	return 0;
}
