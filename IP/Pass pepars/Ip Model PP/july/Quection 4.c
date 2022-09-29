#include <stdio.h>

int main (void)
{
	int n, ans = 1;
	
	scanf("%d", &n);
		
	while(n >= 1)
	{
		ans =  ans * n ;	
		
		n = n - 1;	
	}
	
	printf("Result is  %d \n", ans);
	
	
	return 0;
}
