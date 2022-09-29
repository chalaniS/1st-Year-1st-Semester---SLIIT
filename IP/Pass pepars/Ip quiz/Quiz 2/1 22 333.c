#include <stdio.h>


int main (void)
{
	int num,i,j,k;
	
	printf("Enter Number    : ");
	scanf("%d", &num);
	
	while(num<=0)
	{
		printf("Invalid Number. Enter Number :  ");
		scanf("%d", &num);
	}
	
	for(i=1; i<=num; i++)
	{
		for (j=1;j<=i; j++)
		{
			for(k=1; k<=i; k++)
			
			    printf("%d", i);
			    puts("");
		}
		puts("");
	}
		
	return 0;
}
