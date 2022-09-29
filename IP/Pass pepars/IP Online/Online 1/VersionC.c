#include <stdio.h>

int main (void)
{
	int option, qty, top;
	char size, extra;
	float amount;
	
	printf("Input Pizza Option           :");
	scanf("%d", &option);
	
	printf("Size of the Pizza (P/M/L)    :");
	scanf(" %c", &size);
	
	printf("Number of Pizza              :");
	scanf("%d", &qty);
	
	switch(option)
	{
		case 1 : 
		
     		switch(size)
     		{
     			case 'P':
     				amount = 560.00  * (float)qty; break;
     			case 'M' :
     			    amount = 920.00  * (float)qty; break;
     			case 'L' :
     			    amount = 1800.00 * (float)qty; break;
			 }
	      break;
	    
	    case 2 : 
		
     		switch(size)
     		{
     			case 'P':
     				amount = 340.00 * (float)qty; break;
     			case 'M' :
     			    amount = 660.00 * (float)qty; break;
     			case 'L' :
     			    amount = 1300.00 * (float)qty; break;
			 }
	      break;
	      
	    case 3 : 
		
     		switch(size)
     		{
     			case 'P':
     				amount = 760.00 * (float)qty; break;
     			case 'M' :
     			    amount = 1100.00 * (float)qty; break;
     			case 'L' :
     			    amount = 2100.00 * (float)qty; break;
			 }
	      break;		    
	}
	
	printf("Do you need any extra toppings (y/n) : ");
	scanf(" %c", &extra);
		
	while(extra == 'y' || extra == 'Y')
	{
    	printf("\tInput your option : ");
		scanf("%d", &top);
		
		switch(top)
     	{
		case 1 : amount = amount + 320.00* (float)qty; break;
		case 2 : amount = amount + 140.00* (float)qty; break;
		case 3 : amount = amount + 130.00* (float)qty; break;
		case 4 : amount = amount + 150.00* (float)qty; break;
    	}
    	
		printf("Do you need any extra toppings (y/n) : ");
	    scanf(" %c", &extra);	
	}
	
	printf("Total price : %.2f", amount);
	
	return 0;
}
