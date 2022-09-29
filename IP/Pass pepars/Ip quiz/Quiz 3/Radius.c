#include <stdio.h>

float findRadianValue (float angleinDegrees);
void printRadianValues(void);

int main (void)
{
	printRadianValues();	
}

float findRadianValue (float angleinDegrees)
{
	return (22/1260.00)*angleinDegrees;
}

void printRadianValues(void)
{
	printf("Angle(degrees)    Angle(radius)\n");
	
	float i;
	
	for(i=100;i<=200; i+=20)
	{
    	printf("  %.0f \t\t  %.2f\n", i , findRadianValue(i));
    	
    }
}
