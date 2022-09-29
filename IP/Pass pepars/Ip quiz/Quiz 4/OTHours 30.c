#include <stdio.h>

int main (void)
{
	int OTHours[5] = {30, 35, 40, 25, 50} , i , j = 0;
	float OTrate[5] = {0} , highest[5] = {0};
	
	printf("Enter OTrate \n");
	
	for(i = 0; i < 4; i++ )
	{
		scanf("%f\t ", &OTrate[i]);
		highest[i] = (float)OTHours[i] * OTrate[i];
	}
	
	printf("\nOTHours array\n");
	
	for(i = 0; i < 5; i++ )
	{
		printf("%d\t", OTHours[i]);
	}
	
	printf("\nOTrate \n");
	
	for(i = 0; i < 4; i++ )
	{
		printf("%.2f\t", OTrate[i]);
	}
	
	for(i = 1; i < 5; i++ )
	{
		if(highest[i] > highest[i-1])
		{
			j=i;
		}
	}
	
	printf("\nEmployee who earned highest payment : %d", j+1);

}
