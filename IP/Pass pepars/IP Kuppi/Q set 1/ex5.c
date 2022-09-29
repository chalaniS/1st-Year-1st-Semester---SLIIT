#include<stdio.h>

int main() {
	int arrNum[6];
	int i, check = 0;
	
	for(i = 0; i < 6; ++i) {
		printf("Enter number: ");
		scanf("%d", &arrNum[i]);
		
		if(i > 0) {
			if(arrNum[i] < arrNum[i - 1]) {
				check = 1;
			}
		}
	}
	
	printf("\nNumbers are ");
	if(check == 1) {
		printf("not ");
	}
	printf("stored in ascending order.");
	
	return 0;
}
