#include <stdio.h>

int multiply(int a, int b);
void printTable(int number , int range);

int main (void)
{
	int num, rang;
	
	printf("Enter the number : ");
	scanf("%d", &num);
 	
	printf("Enter the range : ");
	scanf("%d", &rang);
	
	
	printTable(num,rang);
}

int multiply(int a, int b)
{
	return a*b;
}


void printTable(int number , int range)
{
	int i;
	
	for(i=1; i<=range ; i++)
	{
		printf("%d  *  %d  = %d\n", number, i,multiply(number,i) );
	}
}
