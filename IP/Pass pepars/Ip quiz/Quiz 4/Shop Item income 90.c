#include <stdio.h>

int main(void)
{
	float item[3] = {90.00,20.00,55.00},  income[3] = {0};
	int qtySold[3] = {0}, i, j;
	
	printf("Enter qtySold array\n");
	
	for(i = 0 ; i < 3 ; i++)
	{
		scanf("%d", &qtySold[i]);
	}
	
	printf("\nItem array \n");
	
	for(i = 0 ; i < 3 ; i++)
	{
		printf("%.2f\t", item[i] );
	}
	
	printf("\n\nqtySold array\n");
	
	for(i = 0 ; i < 3 ; i++)
	{
		printf("%d\t", qtySold[i]);
	}
	
	income[0] = (float)qtySold[0]*item[0];
	
	for(i = 1 ; i < 3 ; i++)
	{
		income[i] = (float)qtySold[i]*item[i];
		
		if(income[i] < income[i-1])
		{
			j=i+1;
		}
	}
	
	printf("\n\nItem which generate least income : %d", j);
	
	return 0;
}
