#include <stdio.h>

int main (void)
{
	int num,i;
	
	printf("Enter Number : ");
	scanf("%d", &num);
	
	while(num<0)
	{
		printf("Invalid Number. \nEnter Number : ");
		scanf("%d", &num);
	}
	
	for(i=1; i<=12; i++)
	{
		printf("%d * %d = %d\n", num, i, num*i);
	}
	
	
	
	return 0;
}
