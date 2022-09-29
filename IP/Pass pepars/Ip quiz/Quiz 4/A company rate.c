#include <stdio.h>

int main (void)
{
	int rate[5] = {0, 0, 0, 0, 0}, i, r1 = 0, r2 = 0 , r3 = 0 , r4 = 0 , r5 = 0 ;
	
	for(i = 0; i < 5; i++)
	{
		printf("Pls input the service rating (1-5): ");
		scanf("%d", &rate[i]);
		
		if(rate[i] == -1)
			   break;
			
		while(rate[i] < 0 || rate[i] > 5  )
		{
			printf("Invalid input. \nPls input the service rating (1-5): ");
	    	scanf("%d", &rate[i]);
	    	
	    	if(rate[i] == -1)
			   break;
		}
		
		switch (rate[i])
		{
			case 1: r1++; break;
			case 2: r2++; break;
			case 3: r3++; break;
			case 4: r4++; break;
			case 5: r5++; break;
				
		}
		
    }
    
    printf("Rating \t Number of response\n");
    
    printf("1\t %d \n2\t %d \n3\t %d \n4\t %d \n5\t %d \n",r1, r2,r3,r4,r5);
	
	return 0;
	
}
