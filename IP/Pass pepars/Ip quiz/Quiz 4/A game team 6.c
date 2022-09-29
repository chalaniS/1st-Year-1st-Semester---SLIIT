#include <stdio.h>

int main(void)
{
	int rate[5] = { 0,0,0,0, 0}, i ;
	
	
	for(i = 0; i < 5 ; i++)
	{
		printf("\Input mark %d (1-5):" , i+1);
		scanf("%d", &rate[i]);
		
		while( rate[i] < 0 || rate[i] > 100)  
		{
			printf("Invalid rate. Re-enter\n");           
			
			printf("Input mark %d : ", i+1);          
	    	scanf("%d", rate[i]);                   
		}
	}
	
	printf("rating \t\t number of response\n")
	
	for(i = 0; i < 5 ; i++)
	{
		printf("%d\t\t %d",i+1, rate[i]);
	}
	
	
	return 0;
}
