#include <stdio.h>

int main(void)
{
	int team1[3] = { 8, 3, 7}, team2[3] = {0}, i , j=0, k=0;
	
	printf("Enter team2 score \n");
	
	for(i = 0; i < 3 ; i++)
	{
		printf("\tround %d score :" , i+1);
		scanf("%d", &team2[i]);
	}
	
	printf("\nteam1\n\n");
	
	for(i = 0; i < 3 ; i++)
	{
		printf("%d  ", team1[i]);
	}
	
	printf("\n\nteam2\n");
	
	for(i = 0; i < 3 ; i++)
	{
		printf("%d  ", team2[i]);
	}
	
	printf("\n\nWinners\n");
	
	for(i = 0; i < 3 ; i++)
	{
		if(team1[i]>team2[i])
		{
		    printf("Round %d : team1\n", i + 1);
		    j++;
		}
		else
		{
		    printf("Round %d : team2\n", i + 1);
		    k++;
		}
	}
	
	if(j>k)
	{
		printf("\nOverall winner : team1");
	}
	else
	{
		printf("\nOverall winner : team2");
	}
		
	return 0;
}
