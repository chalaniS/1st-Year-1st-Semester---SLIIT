#include <stdio.h>
#include <string.h>

int main (void)
{
	struct Product
	{
		char ID[10], name[80];
		float uPrice, amount;
		int quantity ;
		
	} Product[4];
	
	
	int i;
	float total;
	
	for(i = 0 ; i < 4 ; i++)
	{
		printf("Enter product ID : ");
		scanf("%s", Product[i].ID);
		
		printf("Enter product name : ");
		scanf("%s", Product[i].name);
		
		printf("Enter unit price : ");
		scanf("%f", &Product[i].uPrice);
		
		printf("Enter quantity sold : ");
		scanf("%d", &Product[i].quantity);
		
		puts("");
	}
	
	printf("Product ID \t\t Name \t\t Amount\n.....................................................\n");
	
	for(i = 0 ; i < 4 ; i++)
	{
		Product[i].amount = Product[i].uPrice * (float)Product[i].quantity;
		
		printf("  %s  \t\t  %s  \t\t  %.2f \n", Product[i].ID, Product[i].name, Product[i].amount);
		
		total += Product[i].amount;
	}
	
	printf("\n\t\t\tAmount : %.2f", total);
	
	return 0;
	
}
