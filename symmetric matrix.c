#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],i,j,r,c;
	
	printf("enter no of rows in matrix :");
	scanf("%d",&r);
	printf("\n enter no of columns in matrix :");
	scanf("%d\n",&c);
	
	printf("\nEnter matrix A:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n transpose of the matrix is");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",&a[j][i]);
		}
	}
	
	if(a[i][j]==a[j][i])
	{
		printf("\nEntered matrix are symmetric");
	}
	else
	{
		printf("\nEntered matrix are asymmetric");
	}
}
