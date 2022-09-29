#include <stdio.h>

//prototype function
float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount (int noOfGuests, float chargePerGuest, float discount);

//function main begin here
int main (void)
{
	//declare local varible
	int guest;
	float charge;
	
	//prompt for number of guests
	printf("Enter no of guests : ");
	scanf("%d", &guest);
	
	//prompt for the charge per guest
	printf("Enter charge per guest : ");
	scanf("%f", &charge);
	
	//display the calculated discount
	printf("Discount : %.2f\n", getDiscountPrice(guest, charge));
	
	//display the calculated amount
    printf("Amount to be paid : %.2f",getAmount(guest, charge, getDiscountPrice(guest, charge)) );
}//function main end here

// function getDiscountPrice begin
float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
	if(noOfGuests>200)
	     return chargePerGuest*(float)noOfGuests*0.1;
	     
	else 
	    return 0;
} // function getDiscountPrice end here


// function getAmount begin here
float getAmount (int noOfGuests, float chargePerGuest, float discount)
{
	return ((float)noOfGuests*chargePerGuest)-discount;
} // function getAmount end here


