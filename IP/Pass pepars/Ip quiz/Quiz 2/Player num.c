#include <stdio.h>

int main(void)
{
	int num=0, i,j, pnum, score1, score2, score3;
	float total=0, max=0;
	
	printf("Input number of players : ");
	scanf("%d", &num);
	
for(i=1;i<=num;i++)
{	
	printf("\n\nInput player number : ");
	scanf("%d", &pnum);
	
	printf("Input score 1 : ");
	scanf("%d", &score1);
	
	printf("Input score 2 : ");
	scanf("%d", &score2);
	
	printf("Input score 3 : ");
	scanf("%d", &score3);
	
	total=(score1+score2+score3);
	
	printf("Total score   : %.2f", total);
	
	if(max<total) 
	{
	   max=total;
	   j=pnum;
	}
	
	total=0;
}
	printf("\n\nThe winner is player Number :  %d", j);
	
	return 0;
	
}
