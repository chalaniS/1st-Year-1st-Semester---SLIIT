#include <stdio.h>
int main (void)
{
    int ratings[3][4];
    int i;
    int j,maxmovie;
    float total=0;
    float avg=0,max=0;


    for(i=0; i<3; i++)
    {
        printf("Ratings for movie %d\n", i+1);
        for(j=0; j<4; j++)
        {
            printf("Enter movie ratings :- ");
            scanf("%d", &ratings[i][j]);
        }
    }

    printf(" \tReview 01\tReview 02\tReview 03\tReview 04\n");
     for(i=0; i<3; i++)
    {
        printf("Movie %d ", i+1);
        for(j=0; j<4; j++)
        {
            printf("\t%d\t", ratings[i][j]);

        }
        puts("");
    }
    printf("\n");

    for(i=0; i<3; i++)
    {

        for(j=0; j<4; j++)
        {
            total = total + ratings[i][j];

        }
        avg = total/4;
        if(max<avg)
        {
            max=avg;
            maxmovie = i+1;
        }
        printf("Movie %d Average rating = %.2f\n", i+1, avg);

        total = 0;
        avg = 0;
    }
    puts("");
    printf("Maximum rating average is in movie %d with %.2f\n",maxmovie,max);



}
