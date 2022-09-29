#include <stdio.h>

int findBonusTimes(char empCategory);
float findBonus(float salary , int noOfTimes );

int main (void)
{
	char cate;
	float salary;
	
	printf("Enter your basic salary : ");
	scanf("%f", &salary);
	
	printf("Enter your Employee Category : ");
	scanf(" %c", &cate);
	
	printf("Your bonus : %.2f", findBonus(salary, findBonusTimes(cate)));
	
	
	return 0;
}

int findBonusTimes(char empCategory)
{
	int no;
	
	switch(empCategory)
	{
		case 65 : no=1;break;
		
		case 66 : no=2;break;
		
		case 67 ... 69 : no=3;break;
	}
	
	return no;
}

float findBonus(float salary , int noOfTimes )
{
	return (float)noOfTimes*salary;
}

