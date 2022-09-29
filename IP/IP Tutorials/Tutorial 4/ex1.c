#include <stdio.h>

int main (void)
{
	int num ;
	
	printf("Enter number : ");
	scanf("%d", &num);
	
	if(num>=0)
	   printf("Display %d", num);
	   
	else 
	   printf("Display %d", -num);
	
}
