#include <stdio.h>

struct details
{
	int devisionID, noOfpatients ;
};

int main (void)
{
	FILE *ptr;
	
	ptr = fopen("patients.dat", "w");
	
	if(ptr == NULL)
	{
		printf("Fail file opened");
		
		return -1;
	}
	
	struct details division[5];
	
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Enter devision ID  and devision no of patiens : ");
		scanf("%d %d", &division[i].devisionID, &division[i].noOfpatients );
	
		fprintf(ptr, "%d            %d\n", division[i].devisionID,  division[i].noOfpatients );	
	}
	
	fclose(ptr);
	
	return 0; 
}
