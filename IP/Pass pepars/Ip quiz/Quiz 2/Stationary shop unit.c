#include <stdio.h>

int main (void)
{
	int item, qty;
	float total=0, final=0;
		
	printf("Enter item     : ");
	scanf("%d", &item);
	
    while(item!=-99)
    {
    	printf("Enter Quantity : ");
    	scanf("%d", &qty);
	
	    switch(item)
    	{
	    	case 1:
		    	total=(float)qty*30.00;break;
	    	case 2:
		    	total=(float)qty*45.00;break;
	    	case 3:
		    	total=(float)qty*55.00;break;
    	}
    	
    	final+=total;
    	total=0;
    	
    	printf("\nEnter item     : ");
    	scanf("%d", &item);
	
    }

    printf("\nTotal Price to pay Rs: %.2f", final);

	return 0;	
}
