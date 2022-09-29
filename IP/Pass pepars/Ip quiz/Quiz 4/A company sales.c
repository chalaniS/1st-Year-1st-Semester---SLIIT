#include <stdio.h>

int main(void)
{
	double sales[5] = {0,0,0,0,0};
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Input the sales of salesmen %d : ", i+1);
		scanf("%lf", &sales[i]);
		
		while ( sales[i] < 0)
		{
			printf("Please re-enter the amount\nInput the sales of salesmen %d : ", i+1);
	    	scanf("%lf", &sales[i]);
		}
		
		if(sales[i] > 20000)
		{
			sales[i] = sales[i] + 5000.00 ;
		}
	}
	
	printf("\n\nSales person number \t Sales amount\n");
	
	for(i = 0; i < 5; i++)
	{
		printf("%d \t\t %.2f\n", i+1, sales[i]);
	}
	
	return 0;
	
}
