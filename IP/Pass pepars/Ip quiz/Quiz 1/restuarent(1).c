#include <stdio.h>
int main()
{
	int ctype, quantity;
	char item ;
	
	printf("Enter the customer type : ");
	scanf("%d", &ctype);
	
	printf("enter the number of persons :");
	scanf("%d", &quantity);
//customer type 1		
	if(ctype==1)
	{
		printf("Enter the item code : ");
		scanf(" %c", &item);
		if(item=='N' || item=='n')
		{
			printf("Discount : %.2f", (float)quantity*760.00*20/100);
			printf("\nTotal bill : %.2f", (float)(quantity*760)*80/100);
		}
		else if(item=='b' || item=='B')
		{
			printf("Discount : %.2f", (float)quantity*550.00*20/100);
			printf("\nTotal bill : %.2f", (float)(quantity*550)*80/100);
		}
		else if(item=='f' || item=='F')
		{
			printf("Discount : %.2f", (float)quantity*890.00*20/100);
			printf("\nTotal bill : %.2f", (float)(quantity*890)*80/100);
		}
	}
//custermer type 2
	if(ctype==2)
	{
		printf("Enter the item code : ");
		scanf(" %c", &item);
		if(item=='N' || item=='n')
		{
			printf("Discount : %.2f", (float)quantity*760.00*10/100);
			printf("\nTotal bill : %.2f", (float)(quantity*760)*80/100);
		}
		else if(item=='b' || item=='B')
		{
			printf("Discount : %.2f", (float)quantity*550.00*10/100);
			printf("\nTotal bill : %.2f", (float)(quantity*550)*90/100);
		}
		else if(item=='f' || item=='F')
		{
			printf("Discount : %.2f", (float)quantity*890.00*10/100);
			printf("\nTotal bill : %.2f", (float)(quantity*890)*90/100);
		}
	}
	else
	{
		printf("invalid!");
	}
}
