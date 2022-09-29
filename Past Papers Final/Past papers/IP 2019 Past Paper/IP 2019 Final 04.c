#include <stdio.h>
int main(void)
{
    char number[10],testnumber[10];
    char name[20],testname[20];
    int i,flag;

    FILE * cfPtr;
    cfPtr = fopen("loyalty.dat", "a+");

    if(cfPtr == NULL)
    {
        printf("File cannot be opened");
        return -1;
    }
    for(i=0; i<3; i++)
    {
        printf("Enter telephone number :- ");
        scanf(" %s",number);

        printf("Enter customer name :- ");
        scanf(" %s",name);

    }
    fscanf(cfPtr,"%s %s\n", testnumber, testname);
    while(!feof(cfPtr))
    {
        if(number == testnumber)
        {
            flag = 1;
            fscanf(cfPtr,"%s %s\n",testnumber,testname);
        }
    }
    if(flag == 0)
    {
        fprintf(cfPtr,"%s %s\n", number, name);
    }

    fclose(cfPtr);
    return 0;

}
