#include <stdio.h>

int main (void)
{
	int type, days;
	float amount = 0;
	
	printf("Book type : ");
	scanf("%d", &type);
	
	printf("Rental days : ");
	scanf("%d", &days);
	
	switch (type)
	{   
		case 1 :
			printf("Rental per days : Rs. 10.00\n");
			
			    amount = (float)days * 10.00;
			    
		    if(days > 14)
			    amount += amount*0.1;   
		    
		    break;
		     
	    case 2 :
			printf("Rental per days : Rs. 8.00\n");
				
			    amount = (float)days * 8.00;
			    
			if(days > 14)
			    amount += amount*0.1;   
			    
		    break;
	
	}
	
	printf("\nRental Amount : %.2f", amount);
	
	
	return 0;
}
