#include <stdio.h>
#include <assert.h>

float calPayment (char type);
float calDiscount(int age, float amount);


int main(void)
{
	char type;
	int age;
	
	printf("Enter Package Type : ");
	scanf(" %c", &type);
	
	printf("Enter age : ");
	scanf("%d", &age);
	
	if(age<60)
	printf("Amount = %.2f", calPayment(type) );
	
	else if(age>=60)
	printf("Amount = %.2f", calPayment(type) - calDiscount(age,calPayment(type)) );
	
	return 0;
}

float calPayment (char type)
{
 	if(type=='S')
 	   return 15000.00;
 	   
 	else if(type=='C')
 	    return 50000;
 	    
 	else if(type=='H')
 	    return 30000;	
}

float calDiscount(int age, float amount)
{
	return amount = amount*10/100.00;
}


