#include<stdio.h>

int main() {
	int rate[5];
	int i, irate = 0;
	
	for(i = 0; i < 5; ++i) {
		rate[i] = 0;
	}
	
	while(irate != -1) {
		printf("Pls input the service rating(1 - 5): ");
		scanf("%d", &irate);
		
		while((irate < 1 || irate > 5) && irate != -1) {
			printf("Invalid Input!\n");
			printf("Pls input the service rating(1 - 5): ");
			scanf("%d", &irate);
		}
		
		switch(irate) {
			case 1: ++rate[0];
				break;
			case 2: ++rate[1];
				break;
			case 3: ++rate[2];
				break;
			case 4: ++rate[3];
				break;
			case 5: ++rate[4];
				break;
			default: ;
		}
	}
	
	printf("\nRating\t\tNumber of responses\n");
	for(i = 0; i < 5; ++i) {
		printf("%d\t\t%d\n", i + 1, rate[i]);
	}
	
	return 0;
}
