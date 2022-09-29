#include <stdio.h>

int main ()
{
	int seconds, time ;
	char peak;
	
	printf("enter the time period : ");
	scanf("%d", &seconds);
	printf("enter the number of times :");
	scanf("%d", &time);
	printf("enter the peak time (Y/N) : ");
	scanf(" %c", &peak);
	
	if(peak=='n'|| peak=='N')
	{
		if(seconds<30)
		{
			printf("Total amount to be paid : %.2f ", time*10000.00);			
		}
		else if(seconds>=30 && seconds<=60)
		{
			printf("Total amount to be paid : %.2f ", time*15000.00);			
		}
		else if(seconds>60)
		{
			printf("Total amount to be paid : %.2f ", time*20000.00);			
		}
	}
	if(peak=='y'|| peak=='Y')
	{
		if(seconds<30)
		{
			printf("Total amount to be paid : %.2f ", (time*10000.00)*110/100);			
		}
		else if(seconds>=30 && seconds<=60)
		{
			printf("Total amount to be paid : %.2f ", (time*15000.00)*110/100);			
		}
		else if(seconds>60)
		{
			printf("Total amount to be paid : %.2f ", (time*20000.00)*110/100);			
		}
	}
	else 
	{
		printf("\nInvalid");
	}
	return 0;
}
