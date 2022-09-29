#include <stdio.h>
#include <assert.h>//functions

int qualityPoints(float avg);

int main() {

	assert(qualityPoints(100) == 4);
	assert(qualityPoints(95) == 4);
	assert(qualityPoints(90) == 4);
	assert(qualityPoints(89) == 3);
	assert(qualityPoints(85) == 3);
	assert(qualityPoints(80) == 3);
	assert(qualityPoints(79) == 2);
	assert(qualityPoints(75) == 2);
	assert(qualityPoints(70) == 2);
	assert(qualityPoints(69) == 1);
	assert(qualityPoints(65) == 1);
	assert(qualityPoints(60) == 1);
	assert(qualityPoints(59) == 0);
	assert(qualityPoints(30) == 0);
	assert(qualityPoints(0) == 0);

	printf("qualityPoints(avg) unit tests passed!!");

	return 0;                      
}

int qualityPoints(float avg) {
	
	if(avg >= 90 && avg <= 100) {
		return 4;
	}
	else if(avg >= 80) {
		return 3;
	}
	else if(avg >= 70) {
		return 2;
	}
	else if(avg >= 60) {
		return 1;
		
    }
     else {
     	return 0;
	 }
}

