#include <stdio.h>
#include <math.h>

float calBonus(int basicSalary);
int main(void)
{
	int salary, netSalary;
	
	printf("Enter basic salary : ");
	scanf("%d", & salary);
	
	printf("Bonus : %.2f", calBonus(salary));
	printf("\nNet salary : %.2f", (float)salary + calBonus(salary));
	
	return 0;
}

float calBonus(int basicSalary)
{
	if(basicSalary>20000)
	{
		return basicSalary*2.00;
	}
	else if(basicSalary<=20000)
	{
		return basicSalary/2.00;
	}
	else
	{
		return 0;
	}
}
