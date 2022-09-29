#include <stdio.h>

int main()
{
	int pack, guest;
	char food;
		
	printf("Please enter the package type :");
	scanf("%d", &pack);
	
	if(pack==1)
	{
		printf("enter the food type : ");
		scanf(" %c", &food);
		printf("enter the number of guests : ");
		scanf("%d", &guest);
		
		if(food=='s' || food=='S')
		{
			printf("Your bill amount : %.2f", (float)15000.00+1500*guest);
		}
		else if(food=='d' || food=='D')
		{
			printf("Your bill amount : %.2f", (float)15000.00+3000*guest);
		}
		else if(food=='l' || food=='L')
		{
			printf("Your bill amount : %.2f", (float)15000.00+2500*guest);
		}
		else
		{
			printf("\nInvalid");
		}		
	}
	
	else if(pack==2)
	{
		printf("enter the food type : ");
		scanf(" %c", &food);
		printf("enter the number of guests : ");
		scanf("%d", &guest);
		
		if(food=='s' || food=='S')
		{
			printf("Your bill amount : %.2f", (float)30000.00+1500*guest);
		}
		else if(food=='d' || food=='D')
		{
			printf("Your bill amount : %.2f", (float)30000.00+3000*guest);
		}
		else if(food=='l' || food=='L')
		{
			printf("Your bill amount : %.2f", (float)30000.00+2500*guest);
		}
		else
		{
			printf("\nInvalid");
		}		
	}
	else
	{
		printf("\nInvalid");
	}
	return 0;
}
