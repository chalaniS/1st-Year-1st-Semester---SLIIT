#include <stdio.h>

float calcNoOfTimes( int empCategory);
float calcBonus (float salary, float noOfTimes);

int main (void)
{
	int category;
	float salary;
	
	printf("Enter category : ");
	scanf("%d", &category);
	
	printf("Enter salary : ");
	scanf("%f", &salary);
	
	printf("Bonus : %.2f", calcBonus(salary,calcNoOfTimes(category)));
	
}

float calcNoOfTimes( int empCategory)
{
	switch (empCategory)
	{
		case 1 :
			return 1.0; break;
		case 2 :
			return 1.5; break;
		case 3 ... 9 :
			return 2.0; break;
		
	}
}

float calcBonus (float salary, float noOfTimes)
{
	return salary*noOfTimes;
}

