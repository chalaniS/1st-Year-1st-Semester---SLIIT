#include<stdio.h>

int main (void)
{
	int no, user;
	float price;
	
	printf("product no :");
	scanf("%d", &no);
	
	printf("number of user :");
	scanf("%d", &user);
	
	if( no == 1)
	{
		if( user > 0 && user <= 100)
		    price =15.50*user;
		    
		else if(user > 100)
		    price =25.00*(user - 100) + 1550;		
	}
	else if( no == 2)
	{
		if( user > 0 && user <= 100)
		    price =25.00*user;
		    
		else if(user > 100)
		    price =35.00*(user - 100) + 2500;		
	}
	
	printf("Amount to be paid : %.2f", price);
}
