//dont delete page 31
//39 answer
#include <stdio.h>

void modifyArray (float arr[], int size);

int main (void)
{
       float x[5] = { 2, 8, 3, 9, 10};
       
        int i;
        
        modifyArray(x,5);
           
        for(i=0; i<5; i++)
             printf("%d  ", x[i]);

    return 0;

}

void modifyArray(float arr[] , int size)
{
        int i;
        for(i=0; i<size; i++)
        {
            arr[i]= arr[i]+3;
        }

}
