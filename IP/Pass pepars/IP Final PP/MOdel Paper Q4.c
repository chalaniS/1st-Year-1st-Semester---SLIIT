#include <stdio.h>

float calculateIncrement (int grade, float basicSalary);
float calcTotSalary(float salary, float increment);
int main()
{
	float Sal,increment;
	int g;
	
	printf ("Enter Employ Salary = ");
	scanf ("%f",&Sal);
	
	printf ("Enter employ Grade =");
	scanf ("%d",&g);
	
	increment=calculateIncrement(g,Sal);
	
	printf ("Increment : %.2f\n",increment);
	
	printf ("Total Salary : %.2f",calcTotSalary(Sal,increment));
	
}

float calculateIncrement (int grade, float basicSalary)
{
	if (grade==1)
		return (basicSalary*0.1);
	else if (grade==2)
		return (basicSalary*0.15);
	else if (grade==3)
		return (basicSalary*0.2);
	else
		printf ("Invalid input.");			
}

float calcTotSalary(float salary, float increment)
{
	float totSalary;
	totSalary=salary+increment;
	return totSalary;
}
