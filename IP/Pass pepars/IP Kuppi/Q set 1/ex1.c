#include<stdio.h>

int main() {
	int numArr[6], oddNum[6], evenNum[6];
	int i, a = 0, b = 0;
	
	for(i = 0; i < 6; ++i) {
		printf("Enter number: ");
		scanf("%d", &numArr[i]);
		
		if(numArr[i] % 2 == 1) {
			oddNum[a] = numArr[i];
			++a;
		}else {
			evenNum[b] = numArr[i];
			++b;
		}
	}
	
	printf("\nNumber series: ");
	for(i = 0; i < 6; ++i) {
		printf("%d ", numArr[i]);
	}
	
	printf("\nOdd numbers: ");
	for(i = 0; i < a; ++i) {
		printf("%d ", oddNum[i]);
	}
	
	printf("\nEven numbers: ");
	for(i = 0; i < b; ++i) {
		printf("%d ", evenNum[i]);
	}
	
	return 0;
}
