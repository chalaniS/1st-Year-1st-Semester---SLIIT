#include <stdio.h>
#include <string.h>
#define SIZE 150

int main(void) 
{
	char str[SIZE];
	char riversWord[SIZE];
	int i, j = 0;
	
	printf("Enter Word: ");
	scanf("%s", &str);
	
	for(i = (strlen(str) - 1); i >= 0; i--) 
    {
		riversWord[j++] = str[i];
	}
	if(strcmp(strlwr(str), strlwr(riversWord)) == 0) 
	{
		printf("\n %s is a palindrome \n", str);          //is palindrome
	} 
	else 
	{
		printf("\n %s is a not a palindrome \n", str);    //not palindrome
	}	
	return 0;
}

