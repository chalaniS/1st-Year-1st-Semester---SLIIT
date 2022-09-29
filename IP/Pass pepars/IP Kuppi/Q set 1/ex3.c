#include<stdio.h>

int main() {
	int myArr[10], largeNum[10];
	int i, a = 0, tot = 0;
	float avg;
	
	for(i = 0; i < 10; ++i) {
		printf("Enter Number: ");
		scanf("%d", &myArr[i]);
		tot += myArr[i];
		avg = tot / 10.0;
	}
	
	printf("\nAverage: %.1f", avg);
	printf("\nmyArr: ");
	for(i = 0; i < 10; ++i) {
			printf("%d ", myArr[i]);
		if(myArr[i] >= avg) {
			largeNum[a] = myArr[i];
			++a;
		}
	}
	
	printf("\nlargeNum: ");
	for(i = 0; i < a; ++i) {
		printf("%d ", largeNum[i]);
	}
	
	return 0;
}
