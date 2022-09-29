#include <stdio.h>

int main (void)
{
	int num[5] = {0}, i;
	
	FILE *ptr;   //create file pointer
	
	ptr = fopen (" numbers.txt", "w");  // create or open file for writing
	
	if(ptr == NULL)                     
	{
		printf("Fail to creat file ");
		return -1;
	}
	
	for( i = 0; i < 5; i++ )
	{
		printf("Enter number : ");
		scanf("%d", &num[i]);
		
		fprintf(ptr , "%d\n", num[i] ); ////Write numbers to the file
	}
	
	fclose (ptr);
	
	ptr = fopen (" numbers.txt", "r");  //open file for read
	
	fscanf( ptr, "%d", &num[i]);
	
    while (!feof(ptr))
	{
		printf("%d \n", num[i] );       //read numbers from the file
		fscanf( ptr, "%d", &num[i]);
		
	}
	
	fclose(ptr);
	
	return 0;
}
