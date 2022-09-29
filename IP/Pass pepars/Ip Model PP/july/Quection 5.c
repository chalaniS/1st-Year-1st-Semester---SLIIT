#include <stdio.h>

int main ( void )
{
	char type;
	int distance;
	float discount = 0, amount = 0;
	
	printf("Enter vehicle type : ");
	scanf(" %c", &type);
	
	printf("Enter total distance : ");
	scanf("%d", &distance);
	
	if(type == 'C' && distance > 100)
	
	    discount = 40 * distance * (5/100.00);
	    
	else if(type == 'V' && distance > 100)
	
	    discount = 50 * distance * (5/100.00);
	
	else 
	    discount = 0.00;
    
	printf("Discount : %.2f", discount);
	
	return 0;
	
}
