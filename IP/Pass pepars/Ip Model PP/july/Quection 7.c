#include <stdio.h>
#include <string.h>
#include <math.h>

struct center               //declare structure
{
	float x, y;
   	
} ;

int main (void)
{
	struct center C1, C2;  //declare structere variables
	
	C1.x = 10.0;
	C1.y = 5.0;
	
	C2.x = 4.0;
	C2.y = 2.0;
	
	//calculate and display distance
	printf("Distance %.2f", sqrt((C1.x - C2.x) * (C1.x - C2.x) + (C1.y - C2.y) * (C1.y - C2.y)  )) ;
	
	return 0;
}
