#include <stdio.h>

int main (void)
{
	int i, num[9], j;
	
	for(i=0;i<=9; i++)
	{
	printf("Enter value : ");
	scanf("%d",&num[i]);
    }
    
    printf("Element \t Value \t\t  Histogram\n");
    
    for(i=0; i<=9;i++)
    {
    	printf("%d\t\t %d\t\t", i, num[i]);
    	
    	for(j=1; j<=num[i]; j++)
    	{
    		printf("* ");
		}
		
		printf("\n");
    
	}
}
