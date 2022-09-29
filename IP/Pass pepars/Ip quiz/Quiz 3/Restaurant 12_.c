#include <stdio.h>

float calAdditionalCharges( int orderType, float subTotal);
float calTotalBill(float subTotal, float charges);

int main(void)
{
	float total, final;
	int type;
	
	printf("Enter sub total : ");
	scanf("%f", &total);
	
	printf("Enter oder type : ");
	scanf("%d", &type);
	
	printf("Total bill amount : %.2f", calTotalBill(total,calAdditionalCharges(type, total)));
	
	
	return 0;
}

float calAdditionalCharges( int orderType, float subTotal)
{
	float charg;
	
	switch(orderType)
	{
		case 1: charg = subTotal*22/100.00;break;
		case 2: charg = subTotal*12/100.00;break;
		case 3: charg = subTotal*17/100.00;break;
	}
	return charg;
}

float calTotalBill(float subTotal, float charges)
{
	return subTotal + charges;
}




