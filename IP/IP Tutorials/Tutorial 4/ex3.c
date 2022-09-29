#include <stdio.h>
int main ()
{
	char op;
	double first, second, final;
	
	
	printf("Enter an operator(+,-,*,/):");
	scanf("%c", &op);
	printf("\nEnter first number:- ");
	scanf("%lf",&first);
	printf("\nEnter second number:- ");
	scanf("%lf", &second);
{
	if (op=='+')
	{
		printf("\nFinaly:- %.2f",first+second);
	}
	else if (op=='-')
	{
		printf("\nFinaly:- %.2f",first-second);
	}
	else if (op=='*')
	{
		printf("\nFinaly:- %.2f",first*second);
	}
	else if (op=='/')
	{
		printf("\nFinal:- %.2f",first/second);
	}
}
	return 0;	
}
