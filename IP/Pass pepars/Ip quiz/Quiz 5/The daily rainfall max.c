#include <stdio.h>

int main (void)
{
	int rain[2][3], i, j, maxRain[2];
	
	for(i = 0; i < 2; i++)
	{
		printf("%d city \n", i+1);
		
		for(j = 0; j < 3; j++ )
		{
			if(j == 0)
		    	printf("\tEnter morning rainfall : ");
		    	
		    else if(j == 1)
		    	printf("\tEnter noon rainfall    : ");
		    	
		    else if(j == 2)
		    	printf("\tEnter morning rainfall : ");
		    	
		    scanf("%d", &rain[i][j]);
		    
		    
		}
		
		puts("");
	}
	
	for(i = 0; i < 2; i++)
	{
		maxRain[i] = rain[i][0];
		
		for(j = 0; j < 3; j++ )
		{		    
		    if(maxRain[i] < rain[i][j] )
		    {
		    	maxRain[i] = rain[i][j];
			}
		    
		}
		
		printf("\n%d city maximum rainfall : %d\n", i+1, maxRain[i]);
	}
	
	
	return 0;
}
