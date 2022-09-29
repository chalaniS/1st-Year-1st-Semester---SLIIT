#include<stdio.h>

int main() {
	int num[8];
	int i, count = 0;
	
	for(i = 0; i < 8; ++i) {
		printf("Enter number(between 1 - 4): ");
		scanf("%d", &num[i]);
		
		while(num[i] < 1 || num[i] > 4) {
			printf("Invalid Input!\n");
			printf("Enter number(between 1 - 4): ");
			scanf("%d", &num[i]);
		}
		
		if(i > 0) {
			if(num[i] == 3 && num[i - 1] == 1) {
			++count;
			}
		}
	}
	
	printf("\nNum array: ");
	for(i = 0; i < 8; ++i) {
		printf("%d ", num[i]);
	}
	
	printf("\nNumber of times the pattern '1 3' appear: %d", count);
	
	
	return 0;
}
