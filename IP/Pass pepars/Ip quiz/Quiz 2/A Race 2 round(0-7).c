#include <stdio.h>

int main(void)
{
	int players, r1, r2, i;
	
	printf("How many players are in the race : ");
	scanf("%d", &players);

for(i=1;i<=players;i++)
{

	printf("\nEnter the scores of player %d (between 0-7) \n", i);
	
	printf("\tround 1- ");
	scanf("%d", &r1);
	
	printf("\tround 2- ");
	scanf("%d", &r2);
	
	printf("\n\taverage score - %.1f\n", (float)(r1+r2)/2.00);
	
}
	
    return 0;
}
