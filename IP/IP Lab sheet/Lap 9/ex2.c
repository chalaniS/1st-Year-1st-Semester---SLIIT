#include <stdio.h>

int main(void)
{
	int units[3][4]={0}, i, j, max, cu, mo;
	
	for(i = 0; i < 3 ; i++ )
	{
		printf("Customer ID %d \n", i + 1);
		
		for(j = 0; j < 4 ; j++)
		{
			printf("\tEnter Month %d : ", j + 1);
			scanf("%d", &units[i][j]);
		}
				
		puts("");
	}
	
	max = units[0][0];
	
	for(i = 0; i < 3 ; i++ )
	{
		for(j = 0; j < 4 ; j++)
		{
			if(max < units[i][j])
			{
				max = units[i][j];
				cu=i;
				mo=j;
			}
		}
	}
	
	printf("Maximum number of electricity units : %d \n", max);
	printf("Customer ID : %d \nMonth : %d", cu + 1	, mo + 1);
	
	
	return 0;
}
