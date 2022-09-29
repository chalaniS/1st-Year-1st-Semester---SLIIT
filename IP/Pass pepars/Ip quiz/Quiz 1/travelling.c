# include <stdio.h>
int main(void)
{
	int age;
	int accbalance=0;
	printf("Enter your customer balance:");
	scanf("%d",&accbalance);
	printf("Enter your age:");
	scanf("%d",&age);
	if (age<=18){
		if(accbalance<=100000 ||accbalance>=0){
			printf("School bag");
		}
		else{
			printf("Tablet");
		}
	}
	else if (age>18){
		if(accbalance<=100000 || accbalance>=0){
			printf("Travelling Bag");
		}
		else{
			printf("Rice cooker");		
       }
       		
	}
	else{
		printf("Invalid input!");
	}
	
   
return 0;
}

