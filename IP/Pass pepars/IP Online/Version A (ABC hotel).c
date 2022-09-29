#include <stdio.h>
int main (void)
{
	int room_ty,num_day;
	char aco_ty,card_ty;
	float amount;
	
	while(1)
	{
		printf ("Enter type of room : ");
		scanf ("%d",&room_ty);
		
		if (room_ty==-1)
		{
			break;
		}
			
		else if (room_ty>=1 && room_ty<=3)
		{
			printf ("Enter Accommodation Basis (F/H) : ");
			scanf (" %c",&aco_ty);
		
			printf ("Enter No of days : ");
			scanf ("%d",&num_day);
		
			printf ("Enter Reward Card Type (G,S,B) : ");
			scanf (" %c",&card_ty);
			
			if (room_ty==1 && aco_ty=='F' && card_ty=='G')
			{
				amount = 25555*num_day - (25555*num_day)*0.125;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==1 && aco_ty=='F' && card_ty=='S')
			{
				amount = 25555*num_day - (25555*num_day)*0.115;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==1 && aco_ty=='F' && card_ty=='B')
			{
				amount = 25555*num_day - (25555*num_day)*0.095;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==2 && aco_ty=='F' && card_ty=='G')
			{
				amount = 17500*num_day - (17500*num_day)*0.125;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==2 && aco_ty=='F' && card_ty=='S')
			{
				amount = 17500*num_day - (17500*num_day)*0.115;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==2 && aco_ty=='F' && card_ty=='B')
			{
				amount = 17500*num_day - (17500*num_day)*0.095;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==3 && aco_ty=='F' && card_ty=='G')
			{
				amount = 9000*num_day - (9000*num_day)*0.125;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==3 && aco_ty=='F' && card_ty=='S')
			{
				amount = 9000*num_day - (9000*num_day)*0.115;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==3 && aco_ty=='F' && card_ty=='B')
			{
				amount = 9000*num_day - (9000*num_day)*0.095;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==1 && aco_ty=='H' && card_ty=='G')
			{
				amount = 17250*num_day - (17250*num_day)*0.125;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==1 && aco_ty=='H' && card_ty=='S')
			{
				amount = 17250*num_day - (17250*num_day)*0.115;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==1 && aco_ty=='H' && card_ty=='B')
			{
				amount = 17250*num_day - (17250*num_day)*0.095;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==2 && aco_ty=='H' && card_ty=='G')
			{
				amount = 12250*num_day - (12250*num_day)*0.125;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==2 && aco_ty=='H' && card_ty=='S')
			{
				amount = 12250*num_day - (12250*num_day)*0.115;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==2 && aco_ty=='H' && card_ty=='B')
			{
				amount = 12250*num_day - (12250*num_day)*0.095;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==3 && aco_ty=='H' && card_ty=='G')
			{
				amount = 7250*num_day - (7250*num_day)*0.125;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==3 && aco_ty=='H' && card_ty=='S')
			{
				amount = 7250*num_day - (7250*num_day)*0.115;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
			else if (room_ty==3 && aco_ty=='H' && card_ty=='B')
			{
				amount = 7250*num_day - (7250*num_day)*0.095;
				printf ("Amount (Rs.) : %.2f\n\n",amount);
			}
			
		}
		
		else
		{
			printf ("Ivalid Type of Room\n");
		}
	}
	
} 
