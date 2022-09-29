#include <stdio.h>
int main()
{
	int year, units;
	
	printf("Enter the no of year worked : ");
	scanf("%d", &year);
	printf("Enter the number of units sold : ");
    scanf("%d", &units);
	
	if(year>2)
 	{
 		if( units>100)
    	{
		printf("Your commission : %.2f ", (float)units*3500.00);
     	}
    	else if(units>=31 && units<=100)
    	{
    		printf("Your commission : %.2f", (float)units*2500.00);
		}
		else if(units<=30)
		{
			printf("Your commission : %.2f", (float)units*1000.00);
		}
		else
		{
			printf("Invalid number!");
		}
		
    }
    else
    {
    	printf("Your commission : 0.00");
	}
    return 0 ;
}
