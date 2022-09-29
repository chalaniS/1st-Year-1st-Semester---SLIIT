#include <stdio.h>

int main ()
{
	int type, days, stop;
	char foh, card;
	float amount;
do{	
	printf("Enter type of room : ");
	scanf("%d", &type);
	
if(type==1 || type==2 || type ==3)
{
	printf("Enter Accommodation Basis(F/H) : ");
	scanf(" %c", &foh);
	
	printf("Enter No of days : ");
	scanf("%d", &days);
	switch (foh)
	{
		case 'F' :
			switch (type)
			{
				case 1: amount =25555.00*(float)days;break;
				case 2: amount =17500.00*(float)days;break;
				case 3: amount =9000.00*(float)days;break;
			}
			break;
		case 'H' :
			switch (type)
			{
				case 1: amount =17250.00*(float)days;break;
				case 2: amount =12250.00*(float)days;break;
				case 3: amount =7250.00*(float)days;break;
		    }
	}
	printf("Enter reward card type (G,S,B): ");
	scanf(" %c", &card);
	
	switch (card)
	{
		case 'G': amount=amount*(875/1000.00);break;
		case 'S': amount=amount*(885/1000.00);break;
		case 'B': amount=amount*(905/1000.00);break;
	}
	
	
	printf("Amount : %.2f", amount);
	
	printf("\n\n\n");	
}
    
else printf("\n\nInvalid Type of room!\t Try Again!\n\n");

    stop=(int)type;
     
}while(stop!=-1);
	return 0;
}
