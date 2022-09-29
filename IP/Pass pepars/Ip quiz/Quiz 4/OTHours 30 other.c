#include <stdio.h>

int main (void)
{
	int OTHours[5]={30, 35, 40, 25, 25}, i, h;
	float OTrate[5] , maxpay[5]={0} ;
	
	printf("OTHours array\n");
	
	for(i = 0; i < 5 ; i++)
	{
		printf("%d \t", OTHours[i]);
	}
	
	printf("\n\nOTrate\n");
	
	for(i = 0; i < 5 ; i++)
	{
		scanf("%f", &OTrate[i]);
	}
	
	maxpay[0] = (float)OTHours[0] * OTrate[0];
	
	for(i = 1; i < 5 ; i++)
	{
		maxpay[i] = (float)OTHours[i] * OTrate[i] ;
		
		if(maxpay[i] > maxpay[i-1])
		    h = i;
	}
	
	printf("\nemployee who earned highest payment : %d", h+1);
}
