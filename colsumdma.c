#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **p,r,c,i,j,cs;
	
	printf("Enter no of row:");
	scanf("%d",&r);
	printf("Enter no of col:");
	scanf("%d",&c);
	
	
	p=(int **)malloc(r*c*sizeof(int));
	
	printf("\nEnter n numbers:");
	for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	printf("\nEntered n numbers:");
	for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
		{
		printf("%d\t",p[i][j]);
		}
		printf("\n");
		
	}
	
	printf("Column wise sum of the elements is:");
	for(i=0;i<c;i++)
	{
		cs=0;
		for(j=0;j<r;j++)
		{
		 cs=cs+p[i][j];
		}
			printf("%d\t",cs);
	}	
}
