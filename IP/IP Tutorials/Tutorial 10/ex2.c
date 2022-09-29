#include <stdio.h>

int main()
{
    int c=0,s=0,t=0;
    char d;
    char n[20];
    int i;
    
    FILE *fptr;
    
    fptr = fopen("appointment.dat","w+");

    for(i=0;i<5;i++)
	{
        printf("Name: ");
        scanf(" %s",&n);
        
        printf("Type: ");
        scanf(" %c",&d);
        
        fprintf(fptr,"%s\t%c\n",n,d);
    }

    fclose(fptr);
    
    fptr = fopen("appointment.dat","r");
    
    printf("Appointment Type\tNumber of Patients\n");
    
    for(i=0;i<5;i++)
	{
        fscanf(fptr,"%s %c\n",&n,&d);
        if(d=='C')
            c++;
        else if(d=='S')
            s++;
        else if(d=='T')
            t++;
    }

    printf("Consulting\t\t%d\n",c);
    printf("Scanning  \t\t%d\n",s);
    printf("Testing   \t\t%d\n",t);

    fclose(fptr);
    return 0;
}
