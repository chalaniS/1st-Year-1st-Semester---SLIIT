#include <stdio.h>

int main (void)
{
	int size = 10 , i , j;
	int matrix1[size][size], matrix2[size][size];
	
	printf("Input the size of the square matrix (less than 5) : ");
	scanf("%d", &size);
	
	printf("\nInput elements in the first matrix : \n");
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("\telement - [%d],[%d] : ", i, j);
			scanf("%d", &matrix1[i][j] );
		}
	}
	
	printf("Input elements in the second matrix : \n");
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("\telement - [%d],[%d] : ", i, j);
			scanf("%d", &matrix2[i][j] );
		}
	}
	
	printf("\nThe first matrix : ");
	
	for(i = 0; i < size; i++)
	{
		puts("");
		
		for(j = 0; j < size; j++)
		{
			printf("%d  ",matrix1[i][j]);		
		}
		
		puts("");
	}
	
	printf("\nThe second matrix : ");
	
	for(i = 0; i < size; i++)
	{
		puts("");
		
		for(j = 0; j < size; j++)
		{
			printf("%d ",matrix2[i][j]);		
		}
		
		puts("");
	}
	
	printf("\nThe Addiction of two matrix is \n");
	
	for(i = 0; i < size; i++)
	{
		puts("");
		
		for(j = 0; j < size; j++)
		{
			printf("%d ",matrix1[i][j] + matrix2[i][j] );		
		}
		
		puts("");
	}
	
	
	return 0;
}
