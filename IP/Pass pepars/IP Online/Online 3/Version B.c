#include <stdio.h>

int main (void)
{
	int seat[5] = {0, 0, 0, 0, 0} , i , booked[10] = {0} ;
	
	    for (i = 0; i < 10; i++)
	    {	    	
	
			    printf("Pls input the seat number (1 - 10) : ");
	         	scanf("%d", &seat[i]);  
				 
				if(seat[i] == -1)
				    break;       
					
				if(seat[i] > 10 || seat[i] < 1)
				{
					printf("Sorry. please input a valid seat number.\n");
					printf("Pls input the seat number (1 - 10) : ");
	            	scanf("%d", &seat[i]);	
					
					if(seat[i] == -1)
				    break;	
				}                            
			     
	    		while(booked[seat[i]] == 1 )                        
	    		{
	    			printf("Sorry. The seat %d is reseved.\n", seat[i] );
	    			
	    	 		printf("Pls input the seat number (1 - 10) : ");
	            	scanf("%d", &seat[i]);
	            	
	            	if(seat[i] > 10 || seat[i] < 1)
		     		{
				    	printf("Sorry. please input a valid seat number.\n");
				    	printf("Pls input the seat number (1 - 10) : ");
	                	scanf("%d", &seat[i]);	
					
				    	if(seat[i] == -1)
				        break; 	
		     		}  
	            	
	            	if(seat[i] == -1)
				        break;
				}
			
				booked[seat[i]] = 1;
				
		}
		
		printf("\nReserved seat numbers\n");
		
		for (i = 0; i < 10; i++)
		{
			if(booked[i] == 1)
		    	printf("%d  ", i );
		}
	    	    		    
	return 0;
}
