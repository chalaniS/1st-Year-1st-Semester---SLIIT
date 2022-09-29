#include <stdio.h>

float calMark(float finalMark, float caMark);

int main (void)

{
	float fmark, cmark;
	
	printf("Enter Final mark : ");
	scanf("%f", &fmark);
	
	printf("Enter CA mark  : ");
	scanf("%f", &cmark);
	
	printf("Overall Mark = %.2f", calMark(fmark, cmark));
	
	
	return 0;
}

float calMark(float finalMark, float caMark)
{
	return finalMark*(60/100.0) + caMark*(40/100.0);
}
