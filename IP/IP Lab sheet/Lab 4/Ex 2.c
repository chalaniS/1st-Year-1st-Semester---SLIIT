#include <stdio.h>

int main ()
{
	char shape;
	float re, tr, ci, width, length,area, radius, base, heigth ;
	
	printf("Enter the first character of the shape (R, T, C) : ");
	scanf(" %c", &shape);
	
	if(shape == 'r' || shape == 'R')
	{
		printf("Enter width : ");
		scanf("%f", &width);
		printf("Enter length : ");
		scanf("%f", &length);
		area=width*length;
		printf("Area of the rectangle = %.2f", area);
		
	}
	else if(shape=='T' || shape== 't')
	{
		printf("Enter base : ");
		scanf("%f", &base);
		printf("Enter heigth : ");
		scanf("%f", &heigth);
		area=base*heigth/2.0;
		printf("Area of the Triangle = %.2f", area);
	}
	else if(shape=='c' || shape=='C')
	{
		printf("Enter radius : ");
		scanf("%f", &radius);
		area= (22.0/7.0) *radius*radius;
		printf("Area of the circle = %.2f", area);
	}
	
	return 0;
}
