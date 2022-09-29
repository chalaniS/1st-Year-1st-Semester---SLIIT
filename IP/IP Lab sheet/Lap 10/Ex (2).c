#include <stdio.h>

int main (void)
{
	FILE *ptcf;
	
	ptcf = fopen("purchase.txt", "w");
	
	if(ptcf == NULL)
	{
		printf("Fail file opened");
		
		return -1;
	}
	
	struct details
	{
		char id[10], name[10];
		int qty;
		float price;
		
	} detail[4];
	
	int i;
	float total=0;
	
	for(i = 0; i < 4; i++)
	{
		printf("Enter Item Id        : ");
		scanf("%s", detail[i].id);
		
		printf("Enter Name           : ");
		scanf("%s", detail[i].name);
		
		printf("enter quantity(kg)   : ");
		scanf("%d", &detail[i].qty);
		
		printf("Enter price for 1kg  : ");
		scanf("%f", &detail[i].price);
		
		fprintf ( ptcf, "%s  ", detail[i].id);
		fprintf ( ptcf, "%s  ", detail[i].name);
		fprintf ( ptcf, "%d  ", detail[i].qty);
		fprintf ( ptcf, "%f\n", detail[i].price);
		
		puts("");
		
	}
	
	fclose(ptcf); 
	
	printf("\nItem\t Quantity \tUnit price   price \n");
	
	ptcf = fopen("purchase.txt", "r");
	
	for(i = 0; i < 4; i++)
	{
		fscanf(ptcf, "%s  ", detail[i].id);
		
    	fscanf(ptcf, "%s", detail[i].name);
     	printf("%s\t", detail[i].name);
	
    	fscanf(ptcf, "%d", &detail[i].qty);
    	printf ("%d\t\t", detail[i].qty);
	
    	fscanf(ptcf, "%f", &detail[i].price);
	    printf ("%.2f\t\t", detail[i].price);
	
     	printf ("%.2f   \n", (float)detail[i].qty * detail[i].price );
     	
     	total+=((float)detail[i].qty * detail[i].price);
	
    }
    
    printf("\nTotal                                %.2f", total);
    
	return 0;
	
}
