#include <stdio.h>

int main()
{
    int i;
    char phone[10];
    float local, inter,roam;
    
    FILE * cfPtr = fopen("charges.dat", "w");
    
    if(cfPtr == NULL)
    {
        printf("File cannot be opened\n");
        return -1;
    }
    else
    {
    
        for(i=0;i<5;i++)
        {
            printf("Enter telephone Number :- ");
            scanf(" %s",phone);
            
            printf("Input Local :- ");
            scanf("%f", &local);
            
            printf("Input International :- ");
            scanf("%f", &inter);
            
            printf("Input Roam :- ");
            scanf("%f", &roam);
            
            fprintf(cfPtr,"%s \t %.2f \t %.2f \t %.2f \n",phone,local,inter,roam);
        
        }
        fclose(cfPtr);
    
    }
    return 0;
}
