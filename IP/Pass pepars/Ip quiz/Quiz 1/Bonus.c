#include <stdio.h>

int main (void)
{
	int month;
	float salary, bonus = 0;
	
	printf("Number of months  : ");
	scanf("%d", &month);
	
	printf("Basic salary  : ");
	scanf("%f", &salary);
	
	if( month < 6 )
        bonus = 0;
	
	else if( month >= 6)
        bonus = ((float)month/12.00) * salary;
        
    if ( month == 12 && salary <= 45000)
           bonus += salary ;
           
    printf("\nBonus : %.2f", bonus);
	
	return 0;
}
