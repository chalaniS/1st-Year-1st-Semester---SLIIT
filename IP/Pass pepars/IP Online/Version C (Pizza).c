#include <stdio.h>
int main (void)
{
	int p_opt,no_p,t_ty;
	char t_opt,p_size;
	float price,bill_1,bill_2,bill_3,final_bill;

	printf ("Input Pizza Option \t : ");
	scanf ("%d",&p_opt);
	
	if(p_opt>=1 && p_opt<=3)
	{
		printf ("Size of Pizza (P/M/L)\t : ");
		scanf (" %c",&p_size);
		
		switch (p_opt)
		{
			case 1: 
		
			switch (p_size)
			{
				case 'P' : price = 560; 
				break;
				
				case 'M' : price =  920;
				break;
				
				case 'L' : price = 1800;
				break;
			}
			
			case 2:
			
			switch (p_size)
			{
				case 'P' : price = 340; 
				break;
				
				case 'M' : price =  660;
				break;
				
				case 'L' : price = 1300;
				break;
			}
			
			case 3:
			
			switch (p_size)
			{
				case 'P' : price = 760; 
				break;
				
				case 'M' : price =  1100;
				break;
				
				case 'L' : price = 2100;
				break;
			}	
				
		}
		
		printf ("Number of Pizzas \t : ");
		scanf ("%d",&no_p);
		
		bill_1 = price*no_p;
		
		printf ("Do you need any extra toppings (y/n) : ");
		scanf (" %c",&t_opt);
		
		switch (t_opt) 
		{
			case 'y' :
			case 'Y' :
				
			while (t_opt=='y' || t_opt=='Y')
			{
				printf ("   Input your option : ");
				scanf ("%d",&t_ty);
			
				switch (t_ty)
				{
					case 1: bill_2=320*no_p;
					break;
				
					case 2: bill_2=140*no_p;
					break;
				
					case 3: bill_2=130*no_p;
					break;
				
					case 4: bill_2=150*no_p;
					break;	
				}
			
				bill_3 = bill_3 + bill_2;
			
				printf ("Do you need any extra toppings (y/n) : ");
				scanf (" %c",&t_opt);	
				
				if (t_opt=='n' || t_opt=='N')
					{
						break;
					}	
			}
			
			break;
		
		case 'n' : 
		case 'N' : printf ("");
			break;		
		
		default : printf ("Invalid Option.");
		}
		
		final_bill=bill_1+bill_3;
		
		printf ("Total Price Rs : %.2f",final_bill);
		
	}
	else 
	{
			printf ("Invalid Option.");
	}

	return 0;
}
