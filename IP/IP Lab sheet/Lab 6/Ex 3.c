#include <stdio.h>
#include <math.h>

//double PI=3.14;
double circlePeri(double radius);
double circleArea(double radius);
double recArea(double width, double length);
int main (void)
{
	double r, h, cylinder;
		
	printf("Enter the radius of circle : ");
	scanf("%lf",&r);
	
	printf("Enter the height of cylinder : ");
	scanf("%lf",&h);
	
	cylinder=circleArea(r)+ recArea(circlePeri(r),h);
	
	printf("Area of cylinder : %.2f", cylinder);
	
	return 0;
	
}

double circleArea(double radius)
{
	return 3.14*radius*radius;
}
double circlePeri(double radius)
{
	return 2*3.14*radius;
}
double recArea(double width, double length)
{
	return width*length;
}

