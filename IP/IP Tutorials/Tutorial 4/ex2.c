#include <stdio.h>

int main (void)
{
	char type;
	float balance, amount;
	printf("::::::::::::::::::::Withdrawal or Deposit::::::::::::::::\nIf withdrawal:-\t you must enter 'w' or 'W'\nIf deposit:-\tYou must enter 'd' or 'D'\n");
	printf("Enter transaction type : ");   //input transaction type from keyboard
	scanf(" %c", &type);
	
	if(type=='W' || type == 'w')
	{
		printf("You have selected to withdraw money.\n");
		
		printf("Enter bank balance : ");   //input bank balace from keyboard
    	scanf("%f", &balance);
	
    	printf("Enter amount : ");    //input amount from keyboard
    	scanf("%f", &amount);
		
		printf("New balance = %.2f", balance-amount); //new balance calculat and display
	}
	else if(type=='D'|| type=='d')
	{
		printf("You have selected to diposit money.\n");
		
		printf("Enter bank balance : ");   //input bank balace from keyboard
        scanf("%f", &balance);
	
    	printf("Enter amount : ");    //input amount from keyboard
    	scanf("%f", &amount);
		
		printf("New balance = %.2f", balance+amount);  //new balance calculat and display
	}
	else 
	{
		printf("\nYou have selected an invalid transaction type.\n");  //input invalid message
	}
	
}
