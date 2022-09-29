#include <stdio.h>
#include <assert.h>
#include <math.h>

double calculate(double u, double a, double t);

int main (void)
{
	double u, a, t;
	
	assert(fabs(calculate(25, 10, 10) - 750) < 0.01);
	assert(fabs(calculate(50, 5, 20) - 2000) < 0.01);
	assert(fabs(calculate(100, 25, 5) - 812.5) < 0.01);
	assert(fabs(calculate(125, 20, 7) - 1365) < 0.01);
	
	printf("Enter u a t values :");
	scanf("%lf %lf %lf", &u , &a, &t);
		
	printf("Displacement : %.2f", calculate(u, a, t));
	
	return 0;
	
}

double calculate(double u, double a, double t)
{
	double s = u * t + (a*t*t)/2;
	
	return s;
}
