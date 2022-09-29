//C.S.Rajapakshe
//Malabe_campus
//group 12.01, 2021 september intake
//IT21377280



//start
#include <stdio.h>

int main (void)
{
	int marks[5][2] = {0}, i, j;            //declare  arrays
	float finalMark[5]={0};                 //declare  arrays
	
	for(i = 0; i < 5; i++)
	{
		printf("%d student\n", i+1);
		
		for(j = 0 ; j < 2; j++)
		{
			printf("\tEnter %d component mark : ", j+1);
			scanf("%d", &marks[i][j]);                     //get input to the array
		}
		puts("");
	}
	
	for(i = 0; i < 5; i++)
	{
		finalMark[i] = (float)marks[i][0] * 0.40 + (float)marks[i][1] * 0.60;     //calculate the final mark of each student
		
		printf("\n%d student final mark : %.2f\n", i + 1, finalMark[i] );         //Display the final marks
	}
		
	return 0;
}//end
