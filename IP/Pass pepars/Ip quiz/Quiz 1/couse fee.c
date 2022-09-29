#include <stdio.h>

int main (void)
{
	int no, mark;
	float discount=0;
	
	printf("Enter couse number : ");
	scanf("%d", &no);
		
	printf("Enter mark number : ");
	scanf("%d", &mark);
	
	if(no == 1)
	{
		if(mark < 80)
			discount = 0.00;
		else 
			discount = 150000*(7.5/100.00);
		
		printf("Discount : %.2f\n", discount);
     	printf("course fee : %.2f", 150000 - discount );
	}
	else if(no == 2)
	{
		if(mark < 80)
			discount = 0.00;
			
		else 
			discount = 175000*(7.5/100.00);
		
		printf("Discount : %.2f\n", discount);
     	printf("course fee : %.2f", 175000- discount);
	}
	
	else 
	    printf("\nInvalid couse\n");
    
	return 0;	
}
