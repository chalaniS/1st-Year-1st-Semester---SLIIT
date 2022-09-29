#include <stdio.h>

float calcIncrement(float salary, int noofYearsWorked);
float calcTotSalary(float salary, float increment);


int main (void)
{
	int year;
	float salary, increment;
	
	printf("Enter Salary : ");
	scanf("%f" , &salary);
	
	printf("Enter no of years worked : ");
	scanf("%d", &year);
	
	if(year>2)
	{
		increment=calcIncrement(salary, year);
		
		printf("Increment : %.2f", increment);
		
		printf("\nTotal salary : %.2f", calcTotSalary(salary,increment) );
	}
		
		
	return 0;
}

float calcIncrement(float salary, int noofYearsWorked)
{
	return salary*10/100.00;
}

float calcTotSalary(float salary, float increment)
{
	return salary+increment;
}



