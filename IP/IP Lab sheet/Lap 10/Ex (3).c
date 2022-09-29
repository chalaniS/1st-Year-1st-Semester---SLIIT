#include <stdio.h>
int main(){

int count,accountNum=0,balance=0,ammount=0,credit=0,debit=0;
char type;
char nic[15];
char name[15];

FILE*account;

account=fopen("account.txt","w");

FILE*transaction;

transaction=fopen("transaction.txt","r");

for(count=0;count<4;count++){
	
	printf("Enter account number:");
	scanf("%d",&accountNum);
	
	printf("Enter Nic no:");
	scanf("%s",&nic);
	
	printf("Enter custormer name:");
	scanf("%s",&name);
	
	printf("Enter account balance:");
	scanf("%d",&balance);
	
	fprintf(account,"%d\t%s\t%s\t%d\n",account,nic,name,balance);
	puts("");
	
	for(count=0;count<4;count++){
	
	fscanf(transaction,"%c %d",&type,&ammount);
	
	if(type=='D'){
		
		credit+=ammount;
		
		
	}
	else if(type=='W'){
		
		debit+=ammount;
	}

	}
		
	printf("Updated balance:%d\n",balance+credit-debit);
	balance=0;
}
	
return 0;

}
