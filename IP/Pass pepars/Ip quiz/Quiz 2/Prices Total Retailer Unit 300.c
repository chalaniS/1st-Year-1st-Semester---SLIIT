#include <stdio.h>

int main(void)
{
	int item, qty;
	float total=0, final=0;

	printf("Enter item      :");
	scanf("%d", &item);
	
	while(item!=-1)
	{
    	printf("Enter quantity  :");
     	scanf("%d", &qty);
	
     	switch(item)
     	{
	    	case 1:
		    	total=(float)qty*300.25;break;
		
	    	case 2:
		    	total=(float)qty*145.50;break;
			
	     	case 3:
		    	total=(float)qty*525.00;break;
    	}
	
    	final=total+final;
     	total=0;
     	
     	printf("\nEnter item      :");
        scanf("%d", &item);
    }

	printf("\nTotal Price     :Rs. %.2f", final);
	
	return 0;
}
