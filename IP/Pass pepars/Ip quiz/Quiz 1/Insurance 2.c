#include <stdio.h>

int main () 
{
	char type, foi, conti;
	int child;
	float amount;
do{	

	printf("Insurance Type : ");
	scanf(" %c", &type);
    if (type=='A' || type=='D' || type=='s'|| type=='N')
    {
    printf("Family or Individual ( F- family and I- individual) : ");
	scanf(" %c", &foi);
    
    switch (foi)
    {
    	case 'I' : 
    	switch (type)
    	{
    		case 'A' : amount=4500.00; break;
    		case 'N' : amount=3100.00; break;
    		case 'D' : amount=3600.00; break;
    		case 'S' : amount=3300.00; break;
    	}
		break;
		
		case 'F' :
		switch (type)
    	{
    		case 'A' : amount=5200.00; break;
    		case 'N' : amount=4300.00; break;
    		case 'D' : amount=4800.00; break;
    		case 'S' : amount=3800.00; break;
    	}
		break;
			
	}
	if(foi=='F' || foi=='f') 
	{
	  printf("Number of children : ");
	  scanf("%d", &child);
	  if(child>2) amount=amount+ amount*(10/100.00)*((float)child-2);
    }
	
	printf("Amount : %.2f", amount);
	
	printf("\n\nDo you want to continue? ");
	scanf(" %c", &conti);
	printf("\n\n");
    }
    else printf("\n\nInvalid Insurance Type .... Try again !\n\n");
   
}while (conti=='Y' || conti=='y');

	return 0;
}
