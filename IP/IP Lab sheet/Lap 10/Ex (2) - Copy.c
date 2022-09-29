#include <stdio.h>
int main (void)
{
	
char id[5];
char name[10];
int quantity,price,count,totalprice;


FILE*purchase;

purchase=fopen("purchase.txt","w");

if ( purchase== NULL)
{
printf("Fail to create file\n");
return -1;
}

for(count=0;count<5;count++){
	
	printf("Enter Id:");
	scanf("%s",id);
	
	printf("Enter name:");
	scanf("%s",&name);
	
	printf("Enter quantity:");
	scanf("%d",&quantity);
	
	printf("Enter price:");
	scanf("%d",&price);
	
	fprintf(purchase,"%s %s %d %d\n",id,name,quantity,price);	
	
	
}
	fclose(purchase);
	
purchase=fopen("purchase.txt","r");

	fscanf(purchase,"%s %s %d %d",&id,&name,&quantity,&price);
	printf("item\tQuantity\tunitprice\tprice(Rs)");
	
	while(!feof(purchase)){
		
		totalprice=price*quantity;
		printf("%s\t%s\t%d\t%d\n",id,name,price,totalprice);
		
		fscanf(purchase,"%s %s %d %d",&id,&name,&quantity,&price);
	}
	fclose(purchase);
	return 0;
}
