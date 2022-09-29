#include <stdio.h>

int main (void)
{
	int r1, r2, r3, i=1;
	char conti;

do{	
	printf("Enter the scores of players %d (between 0-4)\n", i);
	
	printf("\tround 1 - ");
	scanf("%d", &r1);
	
	printf("\tround 2 - ");
	scanf("%d", &r2);
	
	printf("\tround 3 - ");
	scanf("%d", &r3);
	
	printf("avarage score - %.2f\n\n",(float)(r1+r2+r3)/3.00);
	
	printf("Do you want to enter the scores of another player (y/n) ? ");
	scanf(" %c", &conti);
	i++;
	
}while(conti=='y' || conti=='Y');
	
	
	return 0;
}
