#include <stdio.h>
#include <string.h>

int main (void)
{
	int i;
	
	struct Employee
	{
		int years;
		char id[10], name[80];
		float salary;
		
	}Employee[3];
	
	for( i = 0 ; i < 3 ; i++)
	{
		printf("Enter Employee ID : ");
		scanf("%s", Employee[i].id);
		
		printf("Enter Employee name : ");
		scanf("%s", Employee[i].name);
		
		printf("Enter Employee experience (in year) : ");
		scanf("%d", &Employee[i].years);
		
		printf("Enter Employee salary : ");
		scanf("%f", &Employee[i].salary);
		
		puts("");
	}
	
	printf("Employee ID  \t\t  Name  \t\t Increment \n......................................................................\n");
	
	for( i = 0 ; i < 3 ; i++)
	{
		if(Employee[i].years > 2)
		{
			printf("  %s    \t\t   %s  \t\t     %.2f \n", Employee[i].id , Employee[i].name , Employee[i].salary * 0.10 );
		}
		else
		{
			printf("  %s    \t\t   %s  \t\t     0.00 \n", Employee[i].id , Employee[i].name);
		}
	}
	
	
	return 0;
	
}
