#include <stdio.h>

int main (void)
{
	int rainfall[3][4] , i , j, maxRainfall[3] = {0};
	
	for(i = 0; i < 3; i++)
	{
		printf("%d day, \n", i + 1);
		
		for(j = 0; j < 4 ; j++)
		{
			printf("  Enter %d city rainfall : ", j + 1);
			scanf("%d", &rainfall[i][j]);
		}
		
		puts("");
	}
	
	for(i = 0; i < 3; i++)
	{
		maxRainfall[i] = rainfall[i][0];
		
		for(j = 0; j < 4 ; j++)
		{
			if(maxRainfall[i] < rainfall[i][j])
			{
				maxRainfall[i] = rainfall[i][j];
			}
		}
		
		printf("\n%d day maximum rainfall day : %d", i+1, maxRainfall[i] );
	} 

	return 0;
}
