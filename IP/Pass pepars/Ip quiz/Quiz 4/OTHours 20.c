#include <stdio.h>

int main (void)
{
	int OTHours[5] = {20, 22, 25, 19, 20} , i , j = 0;
	float OTrate[5] = {0} , highest[5] = {0};
	
	printf("Enter OTrate \n");
	
	for(i = 0; i < 4; i++ )
	{
		scanf("%f\t ", &OTrate[i]);
	}
	
	printf("\nOTHours array\n");
	
	for(i = 0; i < 5; i++ )
	{
		printf("%d\t", OTHours[i]);
	}
	
	printf("\n\nOTrate \n");
	
	for(i = 0; i < 4; i++ )
	{
		printf("%.2f\t", OTrate[i]);
	}
	
	for(i = 1; i < 5; i++ )
	{
		highest[i] = (float)OTHours[i] * OTrate[i]; 
		
		if(highest[i] > highest[i-1])
		{
			j=i;
		}
	}
	
	printf("\n\n\nEmployee who earned highest payment : %d", j+1);

}
