#include <stdio.h>

int main(void)
{
	int Motion[4], i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter value : ");
		scanf("%d", &Motion[i]);
	}
	
	printf("\nInitial values.\n");
	
	for(i=0; i<5; i++)
	{
		printf("%d\t", Motion[i] );
	}
	
	printf("\nAfter rotating.\n");
	
	for(i=4; i>=0;i--)
	{
		printf("%d\t", Motion[i]);
	}
}
