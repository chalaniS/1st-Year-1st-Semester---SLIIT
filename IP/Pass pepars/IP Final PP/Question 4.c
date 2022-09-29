/*Question 4
Write a C program to calculate the employee salaries of a company. Employees are entitled to get
an increment according to their grades. Increment percentages for each grade is given in the
following table.*/

#include<stdio.h>
float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);

int main(void){
	
	int grade;
	float salary;
	
	printf("Enter Salary : ");
	scanf("%f",&salary);
	
	printf("Enter grade : ");
	scanf("%d",&grade);
	
	printf("\nIncrement: %.2f\n",calculateIncrement(grade, salary));
	printf("Total Salary :%.2f",calcTotSalary( salary, calculateIncrement(grade, salary)));
	
}
float calculateIncrement(int grade, float basicSalary){
	
	float increment;
	
	switch(grade){
		case 1:{
			increment = basicSalary * 10 /100.00;
			break;
		}
		case 2:{
			increment = basicSalary * 15 /100.00;
			break;
		}
		case 3:{
			increment = basicSalary * 20 /100.00;
			break;
		}
	}
	return increment;
}

float calcTotSalary(float salary, float increment){
	
	return salary + increment;
}
