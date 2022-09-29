#include <stdio.h>

int main ()
{
	int type;
	float amount, discount;
	
	printf("Customer Type : ");
	scanf("%d", &type);
	printf("Bill amount : Rs. ");
	scanf("%f", &amount);
	
	discount=0;
	
	switch(type)
	{
		case 1:
			{
			if(amount<=2500) discount=amount*5/100.00;
			else if(amount>2500) discount=amount*10/100.00;
		    }
		    break;
		case 2:
			{
				if(amount>5000) discount=amount*10/100.00;
			}
	}
	printf("Discount amount : %.2f", discount);
	printf("\nFinal bill amount : %.2f", amount-discount);
	
	return 0;
}
