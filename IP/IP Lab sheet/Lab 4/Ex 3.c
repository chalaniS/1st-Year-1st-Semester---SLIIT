#include <stdio.h>

int main ()
{
	int type,num, cost;
	
	printf("Enter package type : ");
	scanf("%d", &type);
	
	printf("Enter number of people :");
	scanf("%d", &num);
	
	if (type==1)
	{
		cost = 2000*num;
	}
	else if(type==2)
	{
		cost=5000*num;		
	}
	else if (type==3)
	{
		cost=num*7000;
	}
	printf("Total cost : %d", cost);
	return 0;
}
