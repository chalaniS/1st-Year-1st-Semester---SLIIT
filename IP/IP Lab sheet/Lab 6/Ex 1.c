#include <stdio.h>
#include <math.h>

float calPayment(int itemcode, int itemqrt );
int main ()
{
	int code, qrt;
	
	printf("Enter the Ithem Code : ");
	scanf("%d",&code);
	
	printf("Enter the Quantity : ");
	scanf("%d", &qrt);
	
	printf("Payment : %.2f", calPayment(code,qrt));	
	
	return 0;
}

float calPayment(int itemcode, int itemqrt )
{
	if(itemcode==1)
	{
		return 50.00*itemqrt;
	}
	else if(itemcode==2)
	{
		return 100.00*itemqrt;
	}
	else
	{
		return 0;
	}
}
