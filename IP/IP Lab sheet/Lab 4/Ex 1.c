#include <stdio.h>

int main ()
{
	int a, b, c, cal;
	
	printf("Enter the a value : ");
	scanf("%d", &a);
	printf("Enter the a value : ");
	scanf("%d", &b);
	printf("Enter the a value : ");
	scanf("%d", &c);
	
	cal= a+b+c;
	if(cal==180)
	{
		printf("Triangle.");
	}
	else
	{
		printf("Not");
	}
	
	
	
	return 0;
}
