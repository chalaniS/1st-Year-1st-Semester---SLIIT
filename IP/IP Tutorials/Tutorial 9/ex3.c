#include <stdio.h>

int main (void)
{
	int sales[4][5], i , j , total[5]={0};
	
	for(i = 0 ; i < 4 ; i++)
	{
		printf("%d sales person\n", i + 1);
		
		for(j = 0 ; j < 5; j++)
		{
			printf("\tEnter %d product sales : ", j + 1);
			scanf("%d", &sales[i][j] );
		}
		
		puts("");
	}
	
	for(j = 0 ; j < 5; j++)
	{
		for(i = 0 ; i < 4 ; i++)
		{
			total[j] +=sales[i][j];
		}
		
		printf("\n%d product total sales : %d", j+1, total[j]);
	}
	
	
}

