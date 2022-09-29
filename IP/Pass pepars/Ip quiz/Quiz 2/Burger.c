#include <stdio.h>

int main(void)
{
	int type, qty;
	float price;

	printf("Enter Burger Type       : ");
	scanf("%d", &type);
	
	while(type>0 && type<4)
	{
    	printf("Enter Quantity          : ");
    	scanf("%d", &qty);
	
     	switch(type)
     	{
     		case 1:
		    	price= 500.00*(float)qty; break;
			
		    case 2:
		     	price= (500.00 + 50.00)*(float)qty; break;
		     	
	    	case 3:
		     	price= (500.00 + 100.00)*(float)qty; break;
     	}
     	
    	printf("Total price           : Rs. %.2f\n\n", price);
    	price=0;
 	 
    	printf("\nEnter Burger Type        : ");
    	scanf("%d", &type);
    }

	return 0;
}
