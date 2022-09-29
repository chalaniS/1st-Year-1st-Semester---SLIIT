#include<stdio.h>
int main()
{
	int sum=0,count=0,mark[10];
	float mean;
	
	while(count<10)
	{
		printf("enter mark of students %d =",count+1);
		scanf("%d",&mark[count]);
		
		if(mark[count]>0 && mark[count]<20)
		{
			sum=sum+mark[count];
			count++;
		}
		else
		{
			printf("invalid \n");
		}
	}
	printf("total = %d\n",sum);
	
	for(count=0;count<10;count++)
	{
		printf("\nmark %d= %d",count+1,mark[count]);
	
		}
		printf("\ntotal are = %d",sum);//display the sum
		
		mean=sum/10.0;
		printf("\nmean of mark = %.2f\n",mean);//display the mean
		
		return 0;
}
