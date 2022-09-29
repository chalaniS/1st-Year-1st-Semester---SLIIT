#include <stdio.h>

int main (void)
{
	int rType, days;
	char board, card;
	float amount;
do
{	
	printf("Enter room type : ");
	scanf("%d", &rType);
	
	if(rType == -1)
	   break;
	
	if(rType == 1)
	{
		printf("Enter Accommodation Basis (F/H) : ");
		scanf(" %c", &board);
		
		printf("Enter No of days : ");
		scanf("%d", &days);
		
		switch (board)
		{
			case 'F' : 
			    amount = 25555.00 * (float)days; break;
			     
			case 'H' :
				amount = 17250.00 * (float)days; break;
		}
	}
	
	if(rType == 2)
	{
		printf("Enter Accommodation Basis (F/H) : ");
		scanf(" %c", &board);
		
		printf("Enter No of days : ");
		scanf("%d", &days);
		
		switch (board)
		{
			case 'F' : 
			    amount = 17500.00 * (float)days; break;
			     
			case 'H' :
				amount = 12250.00 * (float)days; break;
		}
	}
	
	if(rType == 3 && rType != -1)
	{
		printf("Enter Accommodation Basis (F/H) : ");
		scanf(" %c", &board);
		
		printf("Enter No of days : ");
		scanf("%d", &days);
		
		switch (board)
		{
			case 'F' : 
			    amount = 9000.00 * (float)days; break;
			     
			case 'H' :
				amount = 7250.00 * (float)days; break;
		}
	}
	
	printf("Enter Reward Card Type ( G, S, B) : ");
	scanf(" %c", &card);
	
	switch(card)
	{
		case 'G':
			amount = amount * 87.50/100.00; break;
		case 'S':
			amount = amount * 88.50/100.00; break;
		case 'B':
			amount = amount * 90.50/100.00; break;
	}
	
	printf("\nAmount (Rs.) : %.2f\n\n", amount);
	
}while(rType !=-1);
	
	return 0;
	
}
