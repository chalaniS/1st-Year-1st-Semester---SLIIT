#include <stdio.h>

int main (void)
{
	float size[3][5], total=0 , avgSize[3];
	int i, j;
	
	for(i = 0; i < 3 ; i++)
	{
		printf("Machine %d\n", i+1);
		
		for(j = 0 ; j <5 ; j++)
		{
			printf("\tEnter %d chocolate ball size : ", j+1);
			scanf("%f",&size[i][j]);
		}
		puts("");
	}
	
	for(i = 0; i < 3 ; i++)
	{
		for(j = 0 ; j <5 ; j++)
		{
			total += size[i][j];
		}
		
		avgSize[i] = total/5.00 ;
		total=0;
		
		printf("\nMachine %d avarage size : %.2f\n", i+1, avgSize[i]);
	
	}
	
	return 0;
}
