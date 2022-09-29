#include <stdio.h>

int main (void)
{
	float size[3][5],  total[3];
	int i, j;
	
	for(i = 0; i < 3 ; i++)
	{
		printf("Machine %d\n", i+1);
		
		for(j = 0 ; j <5 ; j++)
		{
			printf("\tEnter %d chocolate ball size : ", j+1);
			scanf("%f",&size[i][j]);
			
			total[i] += size[i][j];
		}
		puts("");
	}
	
	for(i = 0; i < 3 ; i++)
	{	
		printf("\nMachine %d avarage size : %.2f\n", i+1, total[i]/0.50);	
	}
	
	return 0;
}
