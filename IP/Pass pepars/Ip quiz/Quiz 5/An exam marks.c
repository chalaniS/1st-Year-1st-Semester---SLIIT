#include <stdio.h>

int main (void)
{
	int marks[5][2] = {0}, i, j;
	float finalMark[5]={0};
	
	for(i = 0; i < 5; i++)
	{
		printf("%d student\n", i+1);
		
		for(j = 0 ; j < 2; j++)
		{
			printf("\tEnter %d component mark : ", j+1);
			scanf("%d", &marks[i][j]);
		}
		puts("");
	}
	
	for(i = 0; i < 5; i++)
	{
		finalMark[i] = (float)marks[i][0] * 0.40 + (float)marks[i][1] * 0.60;
		
		printf("\n%d student final mark : %.2f\n", i + 1, finalMark[i] );
	}
		
	return 0;
}
