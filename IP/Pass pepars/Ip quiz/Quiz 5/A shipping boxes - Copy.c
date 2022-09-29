#include <stdio.h>

int main (void)
{
	int boxes[4][3] ,i , j ,  volume[4]={0};
	
	for(i = 0; i < 4 ; i++)
	{
		printf("Enter %d box details  \n", i+1);
		
		for(j = 0 ; j < 3 ; j++)
		{
			if(j==0)
			    printf("\tEnter length : ");
			
			else if(j==1)
			    printf("\tEnter width  : ");
			
			else if(j==2)
			    printf("\tEnter height : ");
			    
			scanf("%d", &boxes[i][j]);
		}
		puts("\n");
	}
	
	for(i = 0; i < 4 ; i++)
	{
	    volume[i] = boxes[i][0];		
			
		for(j = 1 ; j < 3 ; j++)
		{
			volume[i]=volume[i]*boxes[i][j];
		}
		
		printf("\nVolume %d box = %d", i+1, volume[i]);
	}
	
	return 0;
}
