#include <stdio.h>

int main (void)
{
	char correctAnswers[6]={'T','F','F', 'T', 'F', 'T'}, studentAnswers[6] = {0};
    int i,j=0;
    
    printf("Enter student ansewers : \n");
    
    for(i = 0 ; i < 6 ; i++)
    {
    	scanf(" %c", &studentAnswers[i]);
	}
	
	printf("\ncorrectAnswers\n");
    
    for(i = 0 ; i < 6 ; i++)
    {
    	printf("%c   ", correctAnswers[i]);
	}
	
    printf("\n\nstudentAnswers\n");
    
    for(i = 0 ; i < 6 ; i++)
    {
    	printf("%c    ", studentAnswers[i]);
	}

	for(i = 0 ; i < 6 ; i++)
	{
		if(studentAnswers[i] == correctAnswers[i])
	    	j++;
	}
	
	printf("\n\nNumber of correct answers : %d", j);
	
	return 0;

}
