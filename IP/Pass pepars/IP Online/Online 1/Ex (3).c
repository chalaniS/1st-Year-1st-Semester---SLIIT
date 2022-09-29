#include <stdio.h>

int main (void)
{
	int number;
	//declare file pointer
	FILE *ptr1;
	
	//create new file, open an existing file
	ptr1 = fopen("mark.txt", "r");
	
	if(ptr1 == NULL)
	{
		//printf("not opened...");
		return -1;
	}
	
	fscanf(ptr1, "%d", &number);
	printf("%d", number);
	
	fclose(ptr1);
	
	return 0;
}
