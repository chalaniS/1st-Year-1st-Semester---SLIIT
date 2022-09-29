#include<stdio.h>

int main() {
	int intArr[10], positiveNum[10], negativeNum[10];
	int i, a = 0, b = 0;
	
	for(i = 0; i < 10; ++i) {
		printf("Enter number: ");
		scanf("%d", &intArr[i]);
		
		if(intArr[i] >= 0) {
			positiveNum[a] = intArr[i];
			++a;
		}else {
			negativeNum[b] = intArr[i];
			++b;
		}
	}
	
	printf("\nNumber series: ");
	for(i = 0; i < 10; ++i) {
		printf("%d ", intArr[i]);
	}
	
	printf("\nPositive Numbers: ");
	for(i = 0; i < a; ++i) {
		printf("%d ", positiveNum[i]);
	}
	
	printf("\nNegative Numbers: ");
	for(i = 0; i < b; ++i) {
		printf("%d ", negativeNum[i]);
	}
	
	return 0;
}
