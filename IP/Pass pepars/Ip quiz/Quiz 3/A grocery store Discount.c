#include <stdio.h>

// prototype funtions
float calcNewPrice (int percentage, float price);
float calDiscountPercent(int category);

// function main begin here
int main (void)
{
	//declare variables
	float price;
	int category;
	
	//prompt for required data
	printf("Enter price : ");
	scanf("%f", &price);
	
	printf("Enter product code : ");
	scanf("%d", &category );
	
	//display new price
	printf("New price : %.2f",calcNewPrice((int)calDiscountPercent(category) , price) );
	
	//return that the program executed successfully
	return 0;
	
}  //function main end here

// function calDiscountPercent begin here
float calDiscountPercent(int category)
{
	switch(category)
	{
		case 1:
			return 10; break;
		case 2: 
		    return 15; break;
		case 3:
			return 20; break;
	}
} //function calDiscountPercent end here

//function calcNewPrice begin here
float calcNewPrice (int percentage, float price)
{
	//calculate and return total salary
	return price - (price*((float)percentage)/100.00);
	
} //function calcNewPrice end here



