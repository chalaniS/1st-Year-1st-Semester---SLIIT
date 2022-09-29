#include <stdio.h>

struct customer 
{
	int accNo;
	char name[10], type;
	float amount;
};

int main (void)
{
	struct customer cust[5];
	int i, maxD, maxW;
	float totalDe = 0, totalW = 0;
	
	for(i = 0; i < 5; i++)
	{
//		printf("Enter account number : ");
//		scanf("%d", &cust[i].accNo );
		
		printf("Enter name : ");
		scanf(" %s", cust[i].name );
		
		printf("Enter transaction type : ");
		scanf(" %c", &cust[i].type );
		
		printf("Enter amount : ");
		scanf("%d", &cust[i].amount );
		
		if (cust[i].type = 'd')
			totalDe += cust[i].amount ;
			
		if (cust[i].type = 'w')
			totalW += cust[i].amount ;
		
		puts(" ");
	}
	

    	for(i = 1; i < 5; i++)
    	{
	     	if((cust[i].amount > cust[i-1].amount) && cust[i].type == 'd' )
	     	{
	    		maxD = i;
	    	}
		
	    	if((cust[i].amount < cust[i-1].amount) && cust[i].type == 'w' )
	    	{
		    	maxW = i;
	    	}			
    	}
	
	printf("Total deposit amount : %.2f \nTotal withdrawal : %.2f \n", totalDe, totalW);
	printf("Name of maximum deposited customer : %s \nName of minimum withdrawn customer : %s", cust[maxD].name, cust[maxW].name );
	
	return 0;
}
