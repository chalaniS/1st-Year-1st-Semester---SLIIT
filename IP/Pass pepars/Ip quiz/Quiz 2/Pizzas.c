/*Student name: C.S.Rajapaksha
Student ID: IT21377280
Batch: September 2021
Group: 12.1
Campus: Malabe*/


#include <stdio.h>

int main (void)
{
	int type, qty;
	float total;

	printf("Enter Pizza Type :  ");
	scanf("%d", &type);
	
	while(type!=-1)
	{
    	printf("Enter Quantity   :  ");
    	scanf("%d", &qty);
	
     	switch(type)
    	{
		    case 1:
			
		    	total=(float)qty*1000.00;
			
		    	if(qty>=3)	
			       total= total*90/100.00;break;
            	
	    	case 2:
			
	    		total=(float)qty*1600.00;
			
			    if(qty>=3)	
				    total= total*88/100.00;break;
    
	    	case 3:
			
		     	total=(float)qty*1400.00;
			
		     	if(qty>=3)  
				    total= total*85/100.00;break;     	
      	}
	
    	printf("Total price Rs. : %.2f\n\n", total);
	
    	printf("Enter Pizza Type :  ");
    	scanf("%d", &type);
    }
	

	
	return 0;
}
