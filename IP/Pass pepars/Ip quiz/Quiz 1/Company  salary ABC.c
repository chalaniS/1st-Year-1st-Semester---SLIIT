#include <stdio.h>

int main()
{
	char cate, cont;
	int  hours;
	float salary;
do{	
	printf("Enter the Employee Category : ");
	scanf(" %c", &cate);
	
	printf("Enter the number of hours : ");
	scanf("%d", &hours);
	
	if(cate=='a' || cate=='A')
	{
		printf("\nSalary : %.2f", salary=hours*600.00);
	}
	else if(cate=='B' || cate=='b')
	{
		printf("\nSalary : %.2f", salary=hours*400.00);
	}
	else if(cate=='c' || cate=='C')
	{
		printf("\nSalary : %.2f", salary=hours*300.00);
    }
	else
	{
		printf("Invalid Input!");
	}
		
	    if(salary<25000)
		{
			printf("\nTax : 0.00");
		}
		else if(salary>=25000 && salary<50000)
		{
			printf("\nTax : %.2f", salary*2/100);
		}
		else if(salary>=50000)
		{
			printf("\nTax : %.2f", salary*4/100);
		}
				
				
				
printf("\n\n\nIf you want to continue enter 'y' : ");
scanf(" %c" ,&cont);
	
}while(cont=='y'|| cont=='Y');


return 0;		
}
