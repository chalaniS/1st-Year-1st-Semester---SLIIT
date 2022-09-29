#include<stdio.h>

int main() {
	double price[6];
	int i;
	
	for(i = 0; i < 6; ++i) {
		price[i] = 0;
		
		printf("Input the price of book %d: ", i + 1);
		scanf("%lf", &price[i]);
		
		if(price[i] <= 0) {
			printf("Please re-enter the amount\n");
			--i;
		}
		//adding discount
		price[i] *= 90 / 100.0;
	}
	
	printf("\nBook ID\t\tPrice\n");
	for(i = 0; i < 6; ++i) {
		printf("%d\t\t%.2lf\n", i + 1, price[i]);
	}
	
	return 0;
}
