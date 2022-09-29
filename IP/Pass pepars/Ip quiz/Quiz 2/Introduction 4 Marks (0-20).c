#include <stdio.h>

int main (void)
{
	int m1,m2,m3,m4,i=1;
	float total=0;
	char conti;
	
do
{	
	printf("Enter the marks of student %d (between 0-20)\n", i);
	
	printf("\tMark 1- ");
	scanf("%d", &m1);
	
	printf("\tMark 2- ");
	scanf("%d", &m2);
	
	printf("\tMark 3- ");
	scanf("%d", &m3);
	
	printf("\tMark 4- ");
	scanf("%d", &m4);
	
	printf("\tTotal marks- %.2f\n", (float)(m1+m2+m3+m4));
	
	printf("Do you want to enter mark of another student (y/n)? ");
	scanf(" %c", &conti);
	
	i++;
	
}while(conti='Y' && conti=='y');
		
	
	return 0;
}
