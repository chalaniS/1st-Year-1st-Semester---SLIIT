#include <stdio.h>

int main (void)
{
	int players, r1,r2,r3,r4,i=1;
	
	printf("How many players are in the race : ");
	scanf("%d", &players);
	
for(i=1;i<=players; i++)
{	
	printf("Enter the scoures of players %d (between 0-5)\n", i);
	
	printf("\tRound 1 - ");
	scanf("%d", &r1);
	printf("\tRound 2 - ");
	scanf("%d", &r2);
	printf("\tRound 3 - ");
	scanf("%d", &r3);
	printf("\tRound 4 - ");
	scanf("%d", &r4);
	
	printf("\taverage score - %.2f\n\n", (float)(r1+r2+r3+r4)/4.00);
	
}
	
	return 0;
}
