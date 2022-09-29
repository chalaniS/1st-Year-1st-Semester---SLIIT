#include <stdio.h>

float calPayment(int type, float weight, char delivery);

int main (void)
{
	int type;
	float weight;
	char delivery;
	
	printf("Enter type : ");
	scanf("%d", &type);
	
	printf("Enter weight : ");
	scanf("%f", &weight);
	
	printf("Do you want delivery : ");
	scanf(" %c", &delivery);
	
	printf("payment : %.2f" , calPayment(type, weight, delivery));
	
	return 0;
}

float calPayment(int type, float weight, char delivery)
{
	float payment;
	
	switch(type)
	{
		case 1 : 
		   payment = 750.00 * weight; break;
		
		case 2 :
			payment = 500.00 * weight; break;
			
		case 3 : 
		    payment = 350.00 * weight; break;		   
	}
	
	if(delivery == 'y')
	     payment = payment + 1000.00;
	     
	     
	return payment;
}

