#include <stdio.h>
#include <string.h>

int main (void)
{
	char newArr[50];
	int  i , j=0;
	
	printf("Enter word : ");
	scanf("%s", newArr );
		
	for(i = 0; i < strlen(newArr); i ++)
	{
		if(newArr[i] >= 65 && newArr[i] <= 90)
		   
		   j++;
		   
	}
	
	printf("No. of uppercase letters : %d", j);
	
	return 0;
}
