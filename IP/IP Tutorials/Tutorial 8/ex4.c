#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main( void){
 int values[]={0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,
 4,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,9};
 int counterValues[10]={0};
 int i,j;

 for(i=0;i<sizeof(values)/sizeof(values[0]);i++){
 counterValues[values[i]]++;
 
 }

 for(i=0;i<10;i++){
    printf("%d %d ",i,counterValues[i]);
    
 for(j=0;j<counterValues[i];j++)
    printf("*");
 
    printf("\n");
 }
 getchar();
 getchar();

}
