#include <stdio.h>

int main (void)
{
	float temp[2][3] , avgTemp[2] , total;
	int i, j;
	
	for(i = 0 ; i < 2 ; i++)
	{
		if(i==0)
		    printf("Colombo Temperature details \n\n");
		else 
		    printf("\n\nKandy Temperature details \n\n");
		
		for(j = 0 ; j < 3 ; j++ )
		{
			if(j==0)
			    printf("\tEnter morning Temperature :");
			   
			else if(j==1)
			    printf("\tEnter noon Temperature :");
			
			else if(j==2)
			    printf("\tEnter evening Temperature :");
			    
			scanf("%f", &temp[i][j]);
			
			total += temp[i][j] ;
		}
		
		avgTemp[i]=total/3.00;
		total=0;
	}
	
	printf("\n\nColombo Temperature Avarage : %.1f \nKandy Temperature Avarage : %.1f ", avgTemp[0], avgTemp[1]);
	
	return 0;
}

