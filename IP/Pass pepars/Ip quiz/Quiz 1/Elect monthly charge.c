#include <stdio.h>

int main ()
{
	int type, unit ;
	
	printf("Enter the customer type  : ");
	scanf("%d", &type);
	printf("Number of units : ");
	scanf("%d", &unit);
	if(type==1 && unit>0)
	{
		if(unit<=100)
		{
	    	printf("Monthly Charge : Rs. %.2f", (float)unit*10.00);
     	}   
		else
		{
			printf("Monthly Charge : Rs. %.2f", (100*10.00 + (unit - 100)*30)*120/100 );
		}
		
	}
	else if(type==2 && unit>0)
	{	
	    if(unit<=100)
		{
	    	printf("Monthly Charge : Rs. %.2f", unit*10.00);
     	}   
		else
		{
			printf("Monthly Charge : Rs. %.2f",(100*10.00 + (unit - 100)*30)*120/100);
		}
		
		
	}
	
	
	return 0;
}
