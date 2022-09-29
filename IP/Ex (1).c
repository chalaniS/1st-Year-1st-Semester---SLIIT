#include <stdio.h>

int main(void)
{
	int i,j;
	
	
	for(i=1; i<5; i++)
	{
		for(j=1; j< i+4; j++)
		{
			printf("* ");
		}
		puts("");
	}
	
	for(i=7; i>=1; i--)
	{
		for(j=i; j > 1; j--)
		{
			printf("* ");
		}
		puts("");
	}
	
	
	
	return 0;
}
