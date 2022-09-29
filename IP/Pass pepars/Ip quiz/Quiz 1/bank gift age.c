#include <stdio.h>

int main()
{
	int age , balance;
	
	printf("Enter the age : ");
	scanf("%d", &age);
	printf("Enter the account balance : ");
	scanf("%d", &balance);
	
	
	if( age <= 18)
	
	{
		if(balance<=100000)
		{
			printf("Your gift : School Bage" );
		}
		else if(balance >100000)
		{
			printf("Your gift : Table");
		}
		else 
		{
			printf("Invalid input!");
		}		
	}
	else if( age > 18)
	
	{
		if(balance<=100000)
		{
			printf("Your gift : Travelling bag " );
		}
		else if(balance >100000)
		{
			printf("Your gift : Rice cooker");
		}
		else 
		{
			printf("Invalid input!");
		}
		
		
	}
	
	else 
	{
		printf("Invalid!");
	}
	return 0;
}

