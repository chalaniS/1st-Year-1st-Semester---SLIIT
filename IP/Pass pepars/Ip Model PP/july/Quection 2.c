#include <stdio.h>

int main (void)
{
	int i, j;
	
    for(i = 5; i > 0; i--)
	{
		for(j = i ; j > 0; j--)
		{
			printf("* ");
		}
			
		puts("");
	}
	
	for(i = 1; i < 7; i++)
	{
		for(j = i ; j > 0; j--)
		{
			printf("* ");
		}
			
		puts("");
	}
	
	
	
	return 0;
}
