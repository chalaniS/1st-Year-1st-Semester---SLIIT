#include<stdio.h>

int main() {
	double sales[5];
	int i;
	
	for(i = 0; i < 5; ++i) {
		sales[i] = 0;
		
		printf("Input the sales of salesman %d: ", i + 1);
		scanf("%lf", &sales[i]);
		
		if(sales[i] < 0) {
			printf("Please re-enter the amount\n");
			--i;
		}
	}
	
	printf("\nSales person number\tSales amount\n");
	for(i = 0; i < 5; ++i) {
		if(sales[i] > 20000) {
			printf("%d\t\t\t%.2lf\n", i + 1, sales[i]);
		}
	}
	
	return 0;
}
