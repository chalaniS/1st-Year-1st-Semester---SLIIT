#include <stdio.h>

int main(void)

{
	double num1, num2 , final;
	char op;
	
	printf("Enter number 1 : ");
	scanf("%lf", &num1);
	
	printf("Enter operator : ");
	scanf(" %c", &op);
	
	printf("Enter number 2 : ");
	scanf("%lf", &num2);
	
	switch(op)
	{
		case '+': final=num1+num2;break;
		case '-': final=num1-num2;break;
		case '*': final=num1*num2;break;
		case '/': final=num1/num2;break;
	}
	 printf("Output = %.2f", final);
}
