#include <stdio.h>

int main (void)
{
	int hours;
	char category;
	float salary, tax;
	
	printf("Employee category :");
	scanf(" %c", &category);
	
	printf("Number of hours   :");
	scanf("%d", &hours);
	
	switch(category)
	{
		case 'A' :
			salary = 600.00 * (float)hours; break;
			
		case 'B' :
			salary = 450.00 * (float)hours; break;
			
		case 'C' :
			salary = 300.00 * (float)hours; break;
	}
	
	if(salary < 2500)
	    tax =0.00;
	
	else if(salary >= 25000 && salary <= 50000)
	    tax = salary * 0.02;
	    
	else if(salary > 50000)
	    tax = salary * 0.04;
	    
	printf("salary : %.2f\ntax : %.2f", salary, tax);
	
	return 0;
	
}
