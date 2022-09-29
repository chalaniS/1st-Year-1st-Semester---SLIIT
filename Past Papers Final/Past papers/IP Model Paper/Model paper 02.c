#include <stdio.h>

int main()
{
    float usage[4][7]= { {1.2,2.1,0.8,0.0,1.0,1.3,4.0},{1.5,3.2,1.0,1.3,4.0,1.5,3.2},{2.3,0.4,1.2,2.1,0.8,0.0,2.6},{2.1,1.7,7.0,2.1,1.2,0.8,0.0}};
    float max,min=100,total=0,avg = 0;
    int i,j,maxday,minday;

    for(i=0; i<4; i++)
    {
        for(j=0; j<7; j++)
        {
            if(max<usage[i][j])
            {
                max++;
                max = usage[i][j];
                maxday = (i*7) + j + 1;
           }

           if(min>usage[i][j])
            {
                min++;
                min = usage[i][j];
                minday = (i*7) + j +1;
            }
        }
    }
    printf("Day of the Month with maximum usage :- %d\n",maxday);
    printf("Maximum Usage in units :- %.2f\n", max);

   /* for(i=0; i<4; i++)
    {
        for(j=0; j<7; j++)
        {
            if(min>usage[i][j])
            {
                min++;
                min = usage[i][j];
                minday = (i*7) + j +1;
            }
        }
    }*/
    printf("Day of the Month with minimum usage :- %d\n",minday);
    printf("Minimum Usage in units :- %.2f\n", min);

     for(i=0; i<4; i++)
    {
        for(j=0; j<7; j++)
        {
            total = total + usage[i][j];

        }
    }printf("Total usage for the Month :- %.2f\n", total);

        avg = total/28.0;

    printf("Average usage for the Month :- %.2f", avg);
}
