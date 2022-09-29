#include <stdio.h>

int main (void)
{
	int marks[5][2] , i , j ;
	float finalMark[5];
	
	for(i = 0; i < 5; i++)
	{
		printf("Student %d \n", i+1);
		for(j = 0; j < 2; j++)
		{
			printf("\tEnter mark %d : ", j+1);
			scanf("%d", &marks[i][j]);
		}
		puts("");
	}
	
	printf("Final marks\n");
	
	for(i = 0; i < 5; i++)
	{
		finalMark[i] = marks[i][0] * 0.40 + marks[i][1] * 0.60;
		
		printf("\tStudent %d : %.2f", i+1, finalMark[i]);
    }
	
	return 0;
}
