#include <stdio.h>

// prototype function
float calIncrement (float salary, int noofYearsWored);
float calTotalSalary(float salary, float increment);

//function main begin here
int main(void)
{
	//declare variables
	int years;
	float salary;
	
	//prompt for required data
	printf("Enter Salary : ");
	scanf("%f", &salary);
	
	printf("Enter no of years worked : ");
	scanf("%d", &years);
	
	//display increment and total salary
	printf("Increment : %.2f \n", calIncrement(salary, years) );
	printf("Total Salary : %.2f",calTotalSalary(salary,calIncrement(salary, years)) );
	
	//return that the program executed successfully
	return 0;
	
}  //function main end here

// function calIncrement begin here
float calIncrement (float salary, int noofYearsWored)
{
	//check eligibility for recieving increment
	if(noofYearsWored>2)
	    
	    //calclulate and return increment
	    return salary*(10/100.00);
	    
	else 
	    return 0 ;
} //function calIncrement end here

//function calTotalSalary begin here
float calTotalSalary(float salary, float increment)
{
	//calculate and return total salary
	return salary + increment;
	
} //function calTotalSalaryend here



