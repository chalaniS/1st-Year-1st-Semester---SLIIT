#include <stdio.h>

int main (void)
{
	int marks[5][2], i, j, total1 = 0, total2 = 0 ;
	float finalMark[5];
	
	for(i = 0; i < 5; i++)
	{
		printf("%d student \n", i+1);
		
		for(j = 0; j < 2; j++)
		{
			printf("\tEnter %d mark : ", j +1);
			scanf("%d", &marks[i][j]);
			
			if(j == 0)
			    total1 += marks[i][j];
			
			else
			    total2 += marks[i][j];
		}
		
		finalMark[i] = total1 * 0.40 + total2 * 0.60;
		total1 = 0;
		total2 = 0;
	}
	
	for(i = 0; i < 5; i++)
	{
		printf("\n%d student final mark : %.2f\n", i+1, finalMark[i]);
		
	}
	
	return 0;
}
