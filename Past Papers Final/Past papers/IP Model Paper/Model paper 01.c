#include <stdio.h>

int main(void) 
{
  char roomtype;
  int norooms;
  int nonights;
  char paymethod, response;
  float sum = 0;
  float total = 0;

  do{
  printf("Enter the room type :- ");
  scanf(" %c", &roomtype);
    
    if((roomtype == 'D' || roomtype == 'd') || 
        (roomtype == 'S' || roomtype == 's') ||
        (roomtype == 'C' || roomtype == 'c') || 
        (roomtype == 'E' || roomtype == 'e') || 
        (roomtype == 'P' || roomtype == 'p') || 
        (roomtype == 'P' || roomtype == 'p') )
    {
            printf("Enter the number of rooms :- ");
            scanf("%d", &norooms);
  
            printf("Enter Number Of nights :- ");
            scanf("%d", &nonights);
  
            printf("Enter payment method :- ");
            scanf(" %c", &paymethod);
      
      if(roomtype == 'D' || roomtype == 'd')
          sum = 31000 * nonights;
      else if (roomtype == 'S' || roomtype == 's')
          sum = 35000 * nonights;
      else if (roomtype == 'C' || roomtype == 'c')
          sum = 50000 * nonights;
      else if (roomtype == 'E' || roomtype == 'e')
          sum = 75000 * nonights;
      else if (roomtype == 'P' || roomtype == 'p')
          sum = 100000 * nonights;
      else
        printf("Enter valid room type\n");
      
      if( (paymethod == 'C') || (paymethod == 'c') )
        {
            total = sum * (90.0/100);
        }
        else if ( (paymethod == 'M') || (paymethod == 'm') )
        {
            total = sum;
        }
        else
        printf("Enter valid payment method\n");
        
        printf("total is %0.2f\n", total);
        
        printf("Do you want to continue Y or N :-");
        scanf(" %c",&response);
    }
    else 
    printf("Enter valid room type");
  }
    while (response == 'Y' || response == 'y');
    
    return 0;
}