#include<stdio.h>

int main (void)
{
	int num , cheak , len ,report = 0 ;
	char name[20] ;
	char atten[10] , i ;
	
	FILE *company ;
	company = fopen ("attendance.dat", "w+");
	
	if(company == NULL)
	{
		printf("file cannot  open");
		return -1 ;
	}
	
	
	for (i = 0 ; i < 2 ; i++ )
	{
		printf("Enter the Employee Number : ");
		scanf("%d" , &num);
		
		fprintf(company , "%d  " , num);
		
		printf("Enter the name : ");
		scanf("%s" , name);
		
		fprintf(company , "%s  " , name);
		
    	printf("Enter the attendance of 7 days(only 1 / 0) : ");
	   	scanf("%7s" , atten);
	   	
	   	
	   		
	   	fprintf(company , "%s\n" , atten);
		   
		   puts(" ");	
	}
	
	fclose (company);
	
	company = fopen("attendance.dat" , "r+");
	
	if (company == NULL)
	{
		printf("File cannot open ");
		return -1 ;
	}
	
	printf("\nEnter the Employee Number : ");
	scanf("%d" , &cheak);
	
	fscanf(company , "%d %*s %s" , &num  , atten);
	
	while (!feof(company))
	{
		if(num == cheak)
		{
			for(i = 0 ; atten[i] != '\0' ; i++)
			{
				if(atten[i] == '1')
				{
					report += 1 ;
				}
			}
			break ;
		}
		
    	fscanf(company , "%d %*s %s" , &num  , atten);	
	}
	
	printf("total no of days that employee works : %d" , report);  
	fclose(company) ;
		
	return 0;
}
