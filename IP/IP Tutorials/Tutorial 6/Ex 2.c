#include <stdio.h>
int add(int x, int y);
int multiply(int x, int y);
int square(int x);
int main ()
{
	int a=3, b=4,c=5,d=7;
	
	float result;	
	result=(float)square(add(multiply(a,b),multiply(c,d)));
	printf("%.2f",result);
}
int add(int x, int y){
	return x+y;
}
int multiply(int x, int y){
	return x*y;
}
int square(int x){
	return x*x;
}
