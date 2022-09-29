#include <stdio.h>

//prototype function
float findNewPrice(int percentage, float price);
float findIncreasePercent(int category);

//func
int main()
{
	float price;
	int code;
	
	printf("Enter Price : ");
	scanf("%f", &price);
	
	printf("Enter product code : ");
	scanf("%d", &code);
	
	printf("New price : %.2f" , findNewPrice((int)findIncreasePercent(code),price));
	
	
	return 0;
}

float findIncreasePercent(int category)
{
	float incre;
	
	switch(category)
	{
		case 1: incre=10;break;
		case 2: incre=15;break;
		case 3: incre=20;break;
	}
	return incre;
}

float findNewPrice(int percentage, float price)
{
	return price+ price *(percentage/100.00);
}

