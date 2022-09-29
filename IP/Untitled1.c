#include <stdio.h>
#include <string.h>

int main (void)
{
   
char myArray[30];
int i;

printf("Enter word  ");
scanf("%s", myArray);

    for(i=0; i<strlen(myArray); i++)
    {

       if(myArray[i] > 90)
          myArray[i] = '*' ;

    }
 
printf(" %s  ", myArray);

return 0;

}
