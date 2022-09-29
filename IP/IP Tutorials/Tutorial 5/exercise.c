#include <stdio.h>

int main ()
{
	int num, sum, i, avg;
	
	i=0;
	sum=0;
	avg=0;
	i=0;
	printf("Enter the number :");
	scanf("%d", &num);
	printf("You enterd number : %d" , num);
	
	while(num>=0)
	{
		sum=num+sum;
		i++ ; 
		avg=sum/i ;
		printf("\nEnter the number :");
    	scanf("%d", &num);
    	printf("You enterd number : %d" , num);
    	
	}
	printf("\nSum = %d", sum);
	printf("\navarage = %.2f", (float)avg );
	
	
	return 0;

}
