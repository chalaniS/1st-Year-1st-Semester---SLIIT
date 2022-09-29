#include<stdio.h>

int main() {
	double salaries[5];
	int i;
	
	for(i = 0; i < 5; ++i) {
		salaries[i] = 0;
		
		printf("Input the salary of employee %d: ", i + 1);
		scanf("%lf", &salaries[i]);
		
		if(salaries[i] < 0) {
			printf("Please re-enter the amount\n");
			--i;
		}
		//adding increment
		if(salaries[i] < 10000) {
			salaries[i] *= 110 / 100.0;
		}
	}
	
	printf("\nEmployee number\t\tSalary\n");
	for(i = 0; i < 5; ++i) {
		printf("%d\t\t\t%.2lf\n", i + 1, salaries[i]);
	}
	
	return 0;
}
