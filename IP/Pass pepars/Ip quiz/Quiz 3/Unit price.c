#include <stdio.h>

// prototype function 
float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemNo, int quantity, float totalCost);

//function main begin here
int main(void)
{
	//declare variables
	int item, qty;
	
	//prompt for item number and quantity
	printf("Enter item number : ");
	scanf("%d", &item);
	
	//prompt for quantity of items
	printf("Enter quantity  : ");
	scanf("%d", &qty);
	
	//call printDetails funtion to display calculated details
	printDetails( item, qty, calculateTotalCost( item, qty ));
	
}

float calculateTotalCost(int itemNo, int quantity)
{
	switch(itemNo)
	{
		case 1 :
			return (float)quantity * 100.00; break;
		case 2 :
			return (float)quantity * 200.00; break;
		case 3 :
			return (float)quantity * 300.00; break;
	}
}

void printDetails(int itemNo, int quantity, float totalCost)
{
	printf("\n\nItem number : %d\nquantity : %d\nTotal Cost : %.2f", itemNo, quantity, totalCost );
}

