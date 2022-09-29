#include <stdio.h>

float findRadianValue (float angleinDegrees);
void printRadianValues(int degrees, int range);

int main(void)
{
	int degree, range;
	
	printf("Enter degrees : ");
	scanf("%d", &degree);
	
	printf("Enter range : ");
	scanf("%d", &range);
	
	printRadianValues(degree, range);
	
}

float findRadianValue (float angleinDegrees)
{
	return (22/1260.00)*angleinDegrees;
}

void printRadianValues(int degrees, int range)
{
	printf("\nAngle(degrees)       Angle(radians)\n");
	
	int i;
	
	for(i=degrees; i<=range; i+=20 )
	{
		printf(" %d   \t\t\t %.2f \n", i,findRadianValue((float)i) );
	}
}
