#include <stdio.h>
#include <string.h>

int main (void)
{
	struct book
	{
		int  noCopies, noReaders;
		char ID[10], title[80];
		
	}book[3];
	
	
	int i, j, max;
	
	for(i = 0; i < 3 ; i++)
	{
		printf("Enter Book ID : ");
		scanf("%s", book[i].ID);
		
		printf("Enter Book Title : ");
		scanf("%s", book[i].title);
		
		printf("Enter number of copies : ");
		scanf("%d", &book[i].noCopies);
		
		printf("Enter number of readers : ");
		scanf("%d", &book[i].noReaders);
		
		puts("");
	}
	
	max = book[0].noReaders ;
	
	for(i = 0; i < 3 ; i++)
	{
		if(book[i].noReaders > max)
		{
		    max=book[i].noReaders;
		    j=i;
		}
	}
	
	printf("Name of the book : %s \n", book[j].title);
	printf("Name of the readers : %d", book[j].noReaders);
	
	
	return 0;
}
