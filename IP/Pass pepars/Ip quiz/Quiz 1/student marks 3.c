#include <stdio.h>

int main()
{
	int mark, sum, i,j;
	sum=0;
	i=1;
while(i<=3)
{	
	
	if(i==1)
	{
		printf("\nStudent 1\n");
	}
	else if(i==2)
	{
		printf("\n\nStudent 2\n");
	}
	else if(i==3)
	{
		printf("\n\nStudent 3\n");
	}
	j=1;
	while(j<=3)
	{
		printf("\nEnter evaluation 1 mark : ");
	    scanf("%d", &mark);
	
    	while(mark>100)
    	{
		printf("\nInvalid mark. Re Enter : ");
		scanf("%d", &mark);
	    }
	    sum=mark+sum;
	    j++;
	}
	
	printf("\nTotal Marks : %d", sum);
	
	sum =0;
	
	printf("\n\n");
	i++;
}
	return 0;
}
