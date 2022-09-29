#include <stdio.h>

int main()
{
    int i;
    char phone[10];
    float local, inter,roam;
    
    FILE * cfPtr = fopen("charges.dat", "r");
    
    if(cfPtr == NULL)
    {
        printf("File cannot be opened\n");
        return -1;
    }
    else
    {
       fscanf(cfPtr,"%s \t %f \t %f \t %f \n",phone,&local,&inter,&roam);
       printf("%s \t %.2f \t %.2f \t %.2f \n",phone,local,inter,roam);
 
    }
     while(!feof(cfPtr));

        fclose(cfPtr);
    
    
    return 0;
}
