#include<stdio.h>

int main() {
	int seat[10];
	int i, check, iseat = 0;
	
	for(i = 0; i < 10; ++i) {
		seat[i] = 0;
	}
	
	while(iseat != -1) {
		check = 1;
		
		while(check != 0) {
			check = 0;
			
			printf("Pls input the seat number(1 - 10): ");
			scanf("%d", &iseat);
			
			if((iseat < 1 || iseat > 10) && iseat != -1) {
				printf("Sorry. Please input a valid seat number.\n");
				++check;
			}
			
			if((seat[iseat - 1] == 1) && iseat != -1 && check == 0) {
				printf("Sorry. The seat %d is reserved.\n", iseat);
				++check;
			}
		}
		
		if(check == 0) {
			seat[iseat - 1] = 1;
		}
	}
	
	printf("\nReserved seats: ");
	for(i = 0; i < 10; ++i) {
		if(seat[i] == 1) {
			printf("%d ", i + 1);
		}
	}
	
	return 0;
}


