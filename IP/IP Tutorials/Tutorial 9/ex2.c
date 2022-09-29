#include <stdio.h>

int main (void)
{
	int  first[4][4] = {5 ,7 ,8, 10, 9, 3, 0, 6, 8, 1, 9, 2, 4, 7, 2, 1 };
	int second[4][4] = {2, 2, 1, 3,  8, 1, 3, 1, 1, 2, 2, 4, 3, 1, 1, 2};
	int answer[4][4] = {0} ,  i, j;
	
	for(i = 0 ; i < 4; i++)
	{
		for( j = 0; j < 4 ; j++)
		{
			answer[i][j] = first[i][j] + second[i][j] ;
		}
	}
	
	printf("\nMatrix 1\n");
	
	for(i = 0 ; i < 4; i++)
	{
		for( j = 0; j < 4 ; j++)
		{
			printf("\t%d\t", first[i][j])  ;
		}
		puts("");
	}
	
	printf("\n\nMatrix 2\n");
	
	for(i = 0 ; i < 4; i++)
	{
		for( j = 0; j < 4 ; j++)
		{
			printf("\t%d\t", second[i][j])  ;
		}
		puts("");
	}
	
	printf("\n\nAnswer \n");
	
	for(i = 0 ; i < 4; i++)
	{
		for( j = 0; j < 4 ; j++)
		{
			printf("\t%d\t", answer[i][j])  ;
		}
		puts("");
	}
	
}
