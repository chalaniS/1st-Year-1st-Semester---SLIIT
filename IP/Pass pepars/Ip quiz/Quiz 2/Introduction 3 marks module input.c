#include <stdio.h>

int main (void)
{
	int module, mark1, mark2, mark3, total=0,i;
	
	printf("How many students are in the module : ");
	scanf("%d", &module);
	
for(i=1; i<=module; i++)
{
	
	printf("\nEnter the marks of student %d (between 0-10)", i);
	      
    printf("\n\tmark 1 - ");
    scanf("%d", &mark1);
    
    printf("\tmark 2 - ");
    scanf("%d", &mark2);
    
    printf("\tmark 3 - ");
    scanf("%d", &mark3);
    
    total=mark1+mark2+mark3;
    
    printf("\tTotal marks - %d \n\n", total);
    
    total = 0;
}	
	return 0;
}
