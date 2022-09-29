#include <stdio.h>

int main (void)
{
	int num, i=1;
	float avg=0, total=0;
	
for (i=1;i<=5;i++)
{
	printf("Enter the mark number %d : ", i);
	scanf("%d", &num);
	while(num<0 || num>=100) 
	{
	    printf("Invalid Input!! \nEnter the mark number %d : ", i);
	    scanf("%d", &num);
    }
	
	total=num+total;
		
}
	printf("\n\nAverage of the 5 marks is : %.2f", (total/5.00));
	
	
	
	return 0;
}
