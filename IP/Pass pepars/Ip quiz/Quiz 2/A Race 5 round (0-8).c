#include <stdio.h>

int main (void)
{
	int r1, r2,r3,r4,r5, i=1, j=1;
	float avg=0;
	char ch;
	
do{	
	printf("\nEnter the scores of player %d (between 0-8)\n", i);
	
	printf("\n\tround 1- ");
	scanf("%d",&r1);
	
	printf("\tround 2- ");
	scanf("%d",&r2);
	
	printf("\tround 3- ");
	scanf("%d",&r3);
	
	printf("\tround 4- ");
	scanf("%d",&r4);
	
	printf("\tround 5- ");
	scanf("%d",&r5);
	
	avg=(float)(r1+r2+r3+r4+r5)/5.00;
	
	printf("average score - %.1f",avg);
	
    printf("\nDo you want to enter the scores of another player(y/n)? ");
	scanf(" %c", &ch);
	
	avg=0;
	i++;
			
}while(ch=='Y' || ch=='y');

  	
	return 0;
}
