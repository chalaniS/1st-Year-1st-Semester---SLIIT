#include <stdio.h>

int main(void)
{
	int i,j;                                  //counter
	int mark[3][3]={0}, total=0 ;
	float avg[3]={0};                         
	
	for(i=0; i<3; i++)
	{
		printf("Student no: %d\n", i+1);                //display student number
		
		for(j=0; j<3;j++)
		{
			printf("Score %d : ", j+1);                 //display score number
			scanf("%d", &mark[i][j]);                   //score input from keyboard
			
			total+=mark[i][j];                          //calculate total of one student score
		}
		
		avg[i]=(float)total/3.00;                       //calculate avarage from one student total score 
			
		total=0;                                        //total catculation repeat to next student 
		
		printf("\n");
	}
	
	printf("Student No \t\t Exam Scores \t\t Average\n");          //table header
	
	for(i=0; i<3; i++)                                             //table rows repatition 
	{
		printf(" %d\t\t\t", i+1);
		
		for(j=0; j<3;j++)                                          //table exam score colums repation
		{
			printf("%d  ", mark[i][j]);
		}
		
		printf("\t\t %.2f \n", avg[i]);                         //display score average 
			
	}
	
}
