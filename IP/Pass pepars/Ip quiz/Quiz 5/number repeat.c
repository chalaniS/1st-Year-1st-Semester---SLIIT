#include <stdio.h>

int main (void)
{
	int number[5] , i ,  repeat, j=0;
	
	printf("Enter values to the array : \n");     //user display 
	
	for(i = 0; i < 5 ; i++)                      //loop to control array memory address
		scanf("%d", &number[i]);                 // get input to correct array address from keyboard 
		
	printf("\n\nEnter the number: ");            //display massage to enter number for check 
	scanf("%d", &repeat);                        //get input to check repeat number
	
	for(i = 0; i < 5 ; i++)                      //loop to control array memory address
	{
		if(number[i] == repeat)                  //filter array element equal and checking number
		    j++;	                             //count repeat 
	}
	
	if(j >1 )                                    //if  array element equal and checking number equal more than one time
	    printf("\nNumber repeated %d times", j); //display repeat times
	    
	else                                         //if array element equal and checking number not equal than
	    printf("\nNumber not repeated");         //display not repeated massege 
	
	return 0;
}
