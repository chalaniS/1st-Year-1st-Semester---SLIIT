#include <stdio.h>

int main (void)
{
	int num, i,j;

	printf("Enter Number : ");
	scanf("%d", &num);
	
	while(num<=0)
    {
    	printf("Invaild Number. \nEnter Number : ");
    	scanf("%d", &num);
    }
    
    puts("");

   	for(i=1;i<=num; i++)
	{
	  	printf("\t");
	     	
	  	for(j=1; j<=num; j++)
        {
		   	printf("* ");
	    }
	     	
	    puts("");
    }

	return 0;
}
