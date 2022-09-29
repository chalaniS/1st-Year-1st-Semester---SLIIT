#include <stdio.h>

//prototype function
float calculateWeeklySalary(int grade, float hrsWorked);
void printDetails(int grade, float hrsWorked, float salary);

//function main begin here
int main (void)
{
	//declare variables
	int grade;
	float hours;
	
	//prompt for grade
	printf("Enter Grade : ");
	scanf("%d", &grade);
	
	//prompt for the number of hours worked
	printf("Enter no of hours worked for the week : ");
	scanf("%f", &hours);
	
	//call the function printDetails and display calculated details
	printDetails(grade, hours, calculateWeeklySalary(grade, hours));
	
}//function main end here

// function calculateWeeklySalary begin here
float calculateWeeklySalary(int grade, float hrsWorked)
{
	//calculate and return weekly salary
	switch(grade)
	{
		case 1:
			return hrsWorked*100.00; break;
		case 2:
			return hrsWorked*200.00; break;
		case 3:
			return hrsWorked*300.00; break;
	}
}// function calculateWeeklySalary end here

//function printDetails begin here
void printDetails(int grade, float hrsWorked, float salary)
{
	printf("\nGrade : %d \nNo of hours worked for the week : %.2f \nSalary : %.2f", grade, hrsWorked,salary);

} //function printDetails end here



