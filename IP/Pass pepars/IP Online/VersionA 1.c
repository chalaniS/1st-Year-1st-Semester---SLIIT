#include <stdio.h>

int main (void)
{
	int i,j, letter;
	
	for(i=97;i<=101;i++)
	{
		
		for(j=97;j<=i;j++)
		{
			printf(" %c", i);		
		}
		
		printf("\n");
	}
	
	return 0;
}
