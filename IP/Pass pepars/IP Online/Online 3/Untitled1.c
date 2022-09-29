#include<stdio.h>

int main(void) {
	
	int seat[5] = {0}, seatNo, i;
	int correctAnsCount = 0;
	
	do {
		printf("Pls input the seat number(1-10): ");
		scanf(" %d", &seatNo);
		
		if((seatNo < 1 || seatNo > 10) && (seatNo != -1)) {
			printf("Sorry.Please input a valid seat number.\n");
			continue;
		}
		if(seat[seatNo-1] == 1) {
			printf("Sorry.The seat %d is reserved.\n", seatNo);
			continue;
		}
		seat[seatNo-1] = 1;

	} while(seatNo != -1);
		
	printf("\nReserved seat numbers:\n");
	for(i = 0; i < 5; i++) {
		if(seat[i] == 1) {
			printf("%d\n", i+1);
		}
	}

	return 0;
}

